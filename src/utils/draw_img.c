#include "../../include/header/so_long.h"

void	draw_tile(t_game *game, char tile, int j, int i)
{
	void	*image;

	image = NULL;
	if (tile == '1')
		image = game->asset->top_left;
	else if (tile == '2')
		image = game->asset->top;
	else if (tile == '3')
		image = game->asset->top_right;
	else if (tile == '4')
		image = game->asset->right;
	else if (tile == '5')
		image = game->asset->bottom_right;
	else if (tile == '6')
		image = game->asset->bottom;
	else if (tile == '7')
		image = game->asset->bottom_left;
	if (image)
		mlx_put_image_to_window(game->evr->mlx,
			game->evr->mlx_win, image, j * 64, i * 64);
	else
		draw_tile2(game, game->evr->map[i][j], j, i);
}

void	draw_tile2(t_game *game, char tile, int j, int i)
{
	void	*image;

	image = NULL;
	if (tile == '8')
		image = game->asset->left;
	else if (tile == '9')
		image = game->asset->internal;
	else if (tile == 'H')
		image = game->asset->enemy;
	else if (tile == '0')
		image = game->asset->ground;
	else if (tile == 'E')
		image = game->asset->exit;
	else if (tile == 'C')
		image = game->asset->item;
	else if (tile == 'P')
		image = game->asset->sprite_mouv[0][4];
	if (image)
		mlx_put_image_to_window(game->evr->mlx,
			game->evr->mlx_win, image, j * 64, i * 64);
}

void	draw_map(t_game *game)
{
	int	i;
	int	j;

	i = 0;
	while (i < game->evr->height)
	{
		j = 0;
		while (game->evr->map[i][j] && game->evr->map[i][j] != '\n')
		{
			draw_tile(game, game->evr->map[i][j], j, i);
			j++;
		}
		i++;
	}
}

void	draw_img(t_game *game)
{
	draw_map(game);
	mlx_put_image_to_window(game->evr->mlx, game->evr->mlx_win,
		game->asset->icone[0], 2, 5);
}
