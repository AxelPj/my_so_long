/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mouv_exit2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axelpeti <axelpeti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 17:59:08 by axelpeti          #+#    #+#             */
/*   Updated: 2025/03/05 14:45:37 by axelpeti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/header/so_long.h"

void	mouv_top_exit_ssj(t_game *game, int new_x, int new_y)
{
	game->i = 0;
	while (game->anim <= 4)
	{
		compteur(game);
		if (game->anim > 0 && game->anim < 2)
			mlx_put_image_to_window(game->evr->mlx, game->evr->mlx_win,
				game->asset->sprite_ssj[1][game->anim],
				game->pos_player[1] * 64, game->pos_player[0] * 64);
		else if (game->anim == 2)
		{
			game->evr->map[game->pos_player[0]][game->pos_player[1]] = 'E';
			mlx_put_image_to_window(game->evr->mlx, game->evr->mlx_win,
				game->asset->exit, game->pos_player[1] * 64,
				game->pos_player[0] * 64);
			game->evr->map[new_x][new_y] = 'P';
			mlx_put_image_to_window(game->evr->mlx, game->evr->mlx_win,
				game->asset->sprite_ssj[1][game->anim], new_y * 64, new_x * 64);
		}
		else if (game->anim > 2 && game->anim <= 4)
			mlx_put_image_to_window(game->evr->mlx, game->evr->mlx_win,
				game->asset->sprite_ssj[1][game->anim], new_y * 64, new_x * 64);
	}
}

void	mouv_bottom_exit_ssj(t_game *game, int new_x, int new_y)
{
	game->i = 0;
	while (game->anim <= 4)
	{
		compteur(game);
		if (game->anim > 0 && game->anim < 2)
			mlx_put_image_to_window(game->evr->mlx, game->evr->mlx_win,
				game->asset->sprite_ssj[0][game->anim],
				game->pos_player[1] * 64, game->pos_player[0] * 64);
		else if (game->anim == 2)
		{
			game->evr->map[game->pos_player[0]][game->pos_player[1]] = 'E';
			mlx_put_image_to_window(game->evr->mlx, game->evr->mlx_win,
				game->asset->exit, game->pos_player[1] * 64,
				game->pos_player[0] * 64);
			game->evr->map[new_x][new_y] = 'P';
			mlx_put_image_to_window(game->evr->mlx, game->evr->mlx_win,
				game->asset->sprite_ssj[0][game->anim], new_y * 64, new_x * 64);
		}
		else if (game->anim > 2 && game->anim <= 4)
			mlx_put_image_to_window(game->evr->mlx, game->evr->mlx_win,
				game->asset->sprite_ssj[0][game->anim], new_y * 64, new_x * 64);
	}
}

void	mouv_right_exit_ssj(t_game *game, int new_x, int new_y)
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
			game->evr->map[game->pos_player[0]][game->pos_player[1]] = 'E';
			mlx_put_image_to_window(game->evr->mlx, game->evr->mlx_win,
				game->asset->exit, game->pos_player[1] * 64,
				game->pos_player[0] * 64);
			game->evr->map[new_x][new_y] = 'P';
			mlx_put_image_to_window(game->evr->mlx, game->evr->mlx_win,
				game->asset->sprite_ssj[2][game->anim], new_y * 64, new_x * 64);
		}
		else if (game->anim > 2 && game->anim <= 4)
			mlx_put_image_to_window(game->evr->mlx, game->evr->mlx_win,
				game->asset->sprite_ssj[2][game->anim], new_y * 64, new_x * 64);
	}
}

void	mouv_left_exit_ssj(t_game *game, int new_x, int new_y)
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
			game->evr->map[game->pos_player[0]][game->pos_player[1]] = 'E';
			mlx_put_image_to_window(game->evr->mlx, game->evr->mlx_win,
				game->asset->exit, game->pos_player[1] * 64,
				game->pos_player[0] * 64);
			game->evr->map[new_x][new_y] = 'P';
			mlx_put_image_to_window(game->evr->mlx, game->evr->mlx_win,
				game->asset->sprite_ssj[3][game->anim], new_y * 64, new_x * 64);
		}
		else if (game->anim > 2 && game->anim <= 4)
			mlx_put_image_to_window(game->evr->mlx, game->evr->mlx_win,
				game->asset->sprite_ssj[3][game->anim], new_y * 64, new_x * 64);
	}
}
