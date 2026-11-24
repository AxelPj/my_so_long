#include "../../include/header/so_long.h"

void	open_windows(t_game *game)
{
	game->evr->mlx_win = mlx_new_window(game->evr->mlx,
			game->evr->width * TILES_SIZE,
			game->evr->height * TILES_SIZE, "So_long");
	if (!game->evr->mlx_win)
	{
		perror("Failed to create window");
		exit(EXIT_FAILURE);
	}
	draw_img(game);
	mlx_key_hook(game->evr->mlx_win, key_hook, game);
	mlx_hook(game->evr->mlx_win, DestroyNotify, NoEventMask, end_game, game);
	mlx_loop(game->evr->mlx);
}

int	key_hook(int keycode, t_game *game)
{
	if (keycode == 65307)
	{
		free_all(game);
	}
	else if ((keycode == 119 && game->ssj_on == 0)
		|| (keycode == 97 && game->ssj_on == 0)
		|| (keycode == 115 && game->ssj_on == 0)
		|| (keycode == 100 && game->ssj_on == 0))
		mouv_all(game, keycode);
	else if ((keycode == 119 && game->ssj_on == 1)
		|| (keycode == 97 && game->ssj_on == 1)
		|| (keycode == 115 && game->ssj_on == 1)
		|| (keycode == 100 && game->ssj_on == 1))
		mouv_all_ssj(game, keycode);
	else if (keycode == 32 && game->ssj_on == 0)
		anim_super(game);
	else if (keycode == 32 && game->ssj_on == 1)
		anim_super_end(game);
	else if (keycode == 101 && game->ssj_on == 0)
		attaque(game);
	else if (keycode == 101 && game->ssj_on == 1)
		kamehameha(game);
	my_printf("deplacement = %d\n\n\n\n", game->deplacement);
	return (0);
}

void	free_all(t_game *game)
{
	free_map(game->evr->map);
	free(game->evr->path_map);
	free(game->pos_player);
	destroy_img(game);
	destroy_sprite(game, 0, 0);
	destroy_sprite2(game, 0);
	destroy_sprite3(game, 0, 0);
	destroy_sprite4(game, 0, 0);
	destroy_sprite5(game, 0, 0);
	mlx_destroy_window(game->evr->mlx, game->evr->mlx_win);
	mlx_destroy_display(game->evr->mlx);
	free(game->evr->mlx);
	game->evr->mlx = NULL;
	free(game->asset);
	free(game->evr);
	exit(0);
}

int	end_game(t_game *game)
{
	free_all(game);
	return (exit(0), 0);
}

void	compteur(t_game *game)
{
	game->i++;
	game->anim = game->i / 3500;
	if (game->anim >= 16)
		game->anim = 16;
}
