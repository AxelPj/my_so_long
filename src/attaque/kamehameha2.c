#include "../../include/header/so_long.h"

/*
** d[0] = direction (0 bas, 1 haut, 2 droite, 3 gauche)
** d[1] / d[2] = deplacement en ligne / colonne pour une case
** k = distance (en cases) depuis le joueur, frame < 0 = sol
*/
static void	kame_put(t_game *game, int *d, int k, int frame)
{
	void	*img;
	int		x;
	int		y;

	x = game->pos_player[0] + k * d[1];
	y = game->pos_player[1] + k * d[2];
	if (frame < 0)
		img = game->asset->ground;
	else
		img = game->asset->kameha_sprite[d[0]][frame];
	mlx_put_image_to_window(game->evr->mlx, game->evr->mlx_win,
		img, y * TILES_SIZE, x * TILES_SIZE);
}

static void	kame_wait(t_game *game)
{
	mlx_do_sync(game->evr->mlx);
	usleep(KAME_DELAY);
}

/* Calcule la portee du rayon jusqu'au premier obstacle
** et tue les ennemis ('H') sur son passage. */
static int	kame_setup(t_game *game, int *d, int i)
{
	int	len;
	int	x;
	int	y;

	d[0] = i;
	d[1] = (i == 0) - (i == 1);
	d[2] = (i == 2) - (i == 3);
	len = 0;
	x = game->pos_player[0] + d[1];
	y = game->pos_player[1] + d[2];
	while (game->evr->map[x][y] == '0' || game->evr->map[x][y] == 'H')
	{
		game->evr->map[x][y] = '0';
		len++;
		x += d[1];
		y += d[2];
	}
	return (len);
}

/* Le rayon se dissipe depuis le joueur jusqu'a l'impact. */
static void	kame_fade(t_game *game, int *d, int len)
{
	int	k;

	k = 0;
	while (k < len)
	{
		k++;
		if (k > 1)
			kame_put(game, d, k - 1, -1);
		kame_put(game, d, k, 5);
		kame_wait(game);
	}
	kame_put(game, d, len, -1);
}

/* Le rayon avance case par case jusqu'au premier mur / objet. */
void	kame_anim(t_game *game, int i)
{
	int	d[3];
	int	len;
	int	k;

	len = kame_setup(game, d, i);
	if (len == 0)
		return ;
	kame_put(game, d, 1, 1);
	kame_wait(game);
	k = 0;
	while (k < len)
	{
		k++;
		if (k == 2)
			kame_put(game, d, 1, 2);
		else if (k > 2)
			kame_put(game, d, k - 1, 6);
		kame_put(game, d, k, 3);
		kame_wait(game);
	}
	kame_put(game, d, len, 4);
	kame_wait(game);
	kame_wait(game);
	kame_fade(game, d, len);
}
