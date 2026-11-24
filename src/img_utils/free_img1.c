#include "../../include/header/so_long.h"

void	destroy_img(t_game *game)
{
	if (game->asset->top_left)
		mlx_destroy_image(game->evr->mlx, game->asset->top_left);
	if (game->asset->top_right)
		mlx_destroy_image(game->evr->mlx, game->asset->top_right);
	if (game->asset->bottom_left)
		mlx_destroy_image(game->evr->mlx, game->asset->bottom_left);
	if (game->asset->bottom_right)
		mlx_destroy_image(game->evr->mlx, game->asset->bottom_right);
	if (game->asset->top)
		mlx_destroy_image(game->evr->mlx, game->asset->top);
	if (game->asset->bottom)
		mlx_destroy_image(game->evr->mlx, game->asset->bottom);
	if (game->asset->left)
		mlx_destroy_image(game->evr->mlx, game->asset->left);
	if (game->asset->right)
		mlx_destroy_image(game->evr->mlx, game->asset->right);
	if (game->asset->internal)
		mlx_destroy_image(game->evr->mlx, game->asset->internal);
	if (game->asset->ground)
		mlx_destroy_image(game->evr->mlx, game->asset->ground);
	if (game->asset->exit)
		mlx_destroy_image(game->evr->mlx, game->asset->exit);
	if (game->asset->item)
		mlx_destroy_image(game->evr->mlx, game->asset->item);
}

void	destroy_sprite(t_game *game, int i, int j)
{
	if (game->asset->enemy)
		mlx_destroy_image(game->evr->mlx, game->asset->enemy);
	while (i < 4)
	{
		j = 0;
		while (j < 5)
		{
			if (game->asset->sprite_mouv[i][j])
				mlx_destroy_image(game->evr->mlx,
					game->asset->sprite_mouv[i][j]);
			if (game->asset->sprite_ssj[i][j])
				mlx_destroy_image(game->evr->mlx,
					game->asset->sprite_ssj[i][j]);
			j++;
		}
		free(game->asset->sprite_mouv[i]);
		free(game->asset->sprite_ssj[i]);
		i++;
	}
	free(game->asset->sprite_mouv);
	free(game->asset->sprite_ssj);
}

void	destroy_sprite2(t_game *game, int i)
{
	while (i < 16)
	{
		mlx_destroy_image(game->evr->mlx, game->asset->ssj[i]);
		i++;
	}
	free(game->asset->ssj);
	mlx_destroy_image(game->evr->mlx, game->asset->icone[0]);
	mlx_destroy_image(game->evr->mlx, game->asset->icone[1]);
	free(game->asset->icone);
}

void	destroy_sprite3(t_game *game, int i, int j)
{
	while (i < 4)
	{
		j = 0;
		while (j < 7)
		{
			if (game->asset->kameha_sprite[i][j])
				mlx_destroy_image(game->evr->mlx,
					game->asset->kameha_sprite[i][j]);
			j++;
		}
		free(game->asset->kameha_sprite[i]);
		i++;
	}
	free(game->asset->kameha_sprite);
}
