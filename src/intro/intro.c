#include "../../include/header/so_long.h"

void	ini_intro(t_intro *intro, char *map)
{
	intro->op = malloc(60 * sizeof(void *));
	intro->i = 0;
	intro->img = 0;
	intro->mlx2 = NULL;
	intro->mlx2 = mlx_init();
	if (!intro->mlx2)
	{
		free(intro->op);
		my_putstr_fd("Error\ncannot connect to the X server", 2);
		my_putstr_fd(" (is DISPLAY set? on Mac: export DISPLAY=:0)\n", 2);
		exit(EXIT_FAILURE);
	}
	charge_intro_all(intro);
	intro->tempmap = map;
}

void	open_intro(t_intro *intro)
{
	intro->mlx_win2 = mlx_new_window(intro->mlx2, 1280, 720,
			"intro_so_long");
	if (!intro->mlx_win2)
	{
		perror("Failed to create window");
		exit(EXIT_FAILURE);
	}
	anim_intro(intro);
	mlx_string_put(intro->mlx2, intro->mlx_win2,
		580, 700, 0x000000, "PRESS ANY KEY !");
	mlx_string_put(intro->mlx2, intro->mlx_win2,
		580, 701, 0xFFFFF, "PRESS ANY KEY !");
	mlx_key_hook(intro->mlx_win2, key_intro, intro);
	mlx_loop(intro->mlx2);
}

void	anim_intro(t_intro *intro)
{
	intro->img = 0;
	while (intro->img < 60)
	{
		mlx_put_image_to_window(intro->mlx2, intro->mlx_win2,
			intro->op[intro->img], 0, 0);
		mlx_do_sync(intro->mlx2);
		usleep(INTRO_DELAY);
		intro->img++;
	}
	intro->img = 59;
}

int	free_intro(t_intro *intro)
{
	int	i;

	i = 0;
	while (i <= 59)
	{
		mlx_destroy_image(intro->mlx2, intro->op[i]);
		i++;
	}
	free(intro->op);
	mlx_loop_end(intro->mlx2);
	mlx_destroy_window(intro->mlx2, intro->mlx_win2);
	mlx_destroy_display(intro->mlx2);
	free(intro->mlx2);
	intro->mlx2 = NULL;
	intro->mlx_win2 = NULL;
	return (0);
}

int	key_intro(int keycode, t_intro *intro)
{
	if (keycode == 65307)
	{
		free_intro(intro);
		exit(0);
	}
	else if (keycode != 65307)
	{
		free_intro(intro);
		start_game(intro->tempmap);
	}
	return (0);
}
