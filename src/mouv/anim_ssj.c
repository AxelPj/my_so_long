#include "../../include/header/so_long.h"

void	anim_t_ssj(t_game *game, int new_x, int new_y)
{
	game->i = 0;
	while (game->anim <= 4)
	{
		compteur(game);
		if (game->anim > 0 && game->anim < 2)
			mlx_put_image_to_window(game->evr->mlx, game->evr->mlx_win,
				game->asset->sprite_ssj[1][game->anim],
				game->pos_player[1] * 64,
				game->pos_player[0] * 64);
		else if (game->anim == 2)
		{
			game->evr->map[game->pos_player[0]][game->pos_player[1]] = '0';
			mlx_put_image_to_window(game->evr->mlx, game->evr->mlx_win,
				game->asset->ground, game->pos_player[1] * 64,
				game->pos_player[0] * 64);
			game->evr->map[new_x][new_y] = 'P';
			mlx_put_image_to_window(game->evr->mlx, game->evr->mlx_win,
				game->asset->sprite_ssj[1][game->anim], new_y * 64,
				new_x * 64);
		}
		else if (game->anim > 2 && game->anim <= 4)
			mlx_put_image_to_window(game->evr->mlx, game->evr->mlx_win,
				game->asset->sprite_ssj[1][game->anim], new_y * 64,
				new_x * 64);
	}
}

void	anim_b_ssj(t_game *game, int new_x, int new_y)
{
	game->i = 0;
	while (game->anim <= 4)
	{
		compteur(game);
		if (game->anim > 0 && game->anim < 2)
			mlx_put_image_to_window(game->evr->mlx, game->evr->mlx_win,
				game->asset->sprite_ssj[0][game->anim],
				game->pos_player[1] * 64,
				game->pos_player[0] * 64);
		else if (game->anim == 2)
		{
			game->evr->map[game->pos_player[0]][game->pos_player[1]] = '0';
			mlx_put_image_to_window(game->evr->mlx, game->evr->mlx_win,
				game->asset->ground, game->pos_player[1] * 64,
				game->pos_player[0] * 64);
			game->evr->map[new_x][new_y] = 'P';
			mlx_put_image_to_window(game->evr->mlx, game->evr->mlx_win,
				game->asset->sprite_ssj[0][game->anim], new_y * 64,
				new_x * 64);
		}
		else if (game->anim > 2 && game->anim <= 4)
			mlx_put_image_to_window(game->evr->mlx, game->evr->mlx_win,
				game->asset->sprite_ssj[0][game->anim], new_y * 64,
				new_x * 64);
	}
}

void	anim_r_ssj(t_game *game, int new_x, int new_y)
{
	game->i = 0;
	while (game->anim <= 4)
	{
		compteur(game);
		if (game->anim > 0 && game->anim < 2)
			mlx_put_image_to_window(game->evr->mlx, game->evr->mlx_win,
				game->asset->sprite_ssj[2][game->anim],
				game->pos_player[1] * 64, game->pos_player[0] * 64);
		else if (game->anim == 2)
		{
			game->evr->map[game->pos_player[0]][game->pos_player[1]] = '0';
			mlx_put_image_to_window(game->evr->mlx, game->evr->mlx_win,
				game->asset->ground, game->pos_player[1] * 64,
				game->pos_player[0] * 64);
			game->evr->map[new_x][new_y] = 'P';
			mlx_put_image_to_window(game->evr->mlx, game->evr->mlx_win,
				game->asset->sprite_ssj[2][game->anim], new_y * 64,
				new_x * 64);
		}
		else if (game->anim > 2 && game->anim <= 4)
			mlx_put_image_to_window(game->evr->mlx, game->evr->mlx_win,
				game->asset->sprite_ssj[2][game->anim], new_y * 64,
				new_x * 64);
	}
}

void	anim_l_ssj(t_game *game, int new_x, int new_y)
{
	game->i = 0;
	while (game->anim <= 4)
	{
		compteur(game);
		if (game->anim > 0 && game->anim < 2)
			mlx_put_image_to_window(game->evr->mlx, game->evr->mlx_win,
				game->asset->sprite_ssj[3][game->anim],
				game->pos_player[1] * 64, game->pos_player[0] * 64);
		else if (game->anim == 2)
		{
			game->evr->map[game->pos_player[0]][game->pos_player[1]] = '0';
			mlx_put_image_to_window(game->evr->mlx, game->evr->mlx_win,
				game->asset->ground, game->pos_player[1] * 64,
				game->pos_player[0] * 64);
			game->evr->map[new_x][new_y] = 'P';
			mlx_put_image_to_window(game->evr->mlx, game->evr->mlx_win,
				game->asset->sprite_ssj[3][game->anim], new_y * 64,
				new_x * 64);
		}
		else if (game->anim > 2 && game->anim <= 4)
			mlx_put_image_to_window(game->evr->mlx, game->evr->mlx_win,
				game->asset->sprite_ssj[3][game->anim], new_y * 64,
				new_x * 64);
	}
}

void	anim_super(t_game *game)
{
	game->i = 0;
	while (game->anim <= 10)
	{
		compteur(game);
		mlx_put_image_to_window(game->evr->mlx, game->evr->mlx_win,
			game->asset->ssj[game->anim], game->pos_player[1] * 64,
			game->pos_player[0] * 64);
	}
	mlx_put_image_to_window(game->evr->mlx, game->evr->mlx_win,
		game->asset->sprite_ssj[0][4], game->pos_player[1] * 64,
		game->pos_player[0] * 64);
	mlx_put_image_to_window(game->evr->mlx, game->evr->mlx_win,
		game->asset->icone[1], 2, 5);
	game->ssj_on = 1;
	game->anim = 0;
}
