/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   attaque.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axelpeti <axelpeti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 18:37:29 by axelpeti          #+#    #+#             */
/*   Updated: 2025/03/16 17:11:43 by axelpeti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/header/so_long.h"

void	attaque(t_game *game)
{
	int	x;
	int	y;

	x = game->pos_player[0];
	y = game->pos_player[1];
	if ((game->dir == 'b' && game->evr->map[x + 1][y] == '0')
		|| (game->dir == 'b' && game->evr->map[x + 1][y] == 'H')
		|| (game->dir == 'b' && game->evr->map[x + 1][y] == 'E'))
		attaque_anim(game, x + 1, y, 0);
	else if ((game->dir == 't' && game->evr->map[x - 1][y] == '0')
		|| (game->dir == 't' && game->evr->map[x - 1][y] == 'H')
		|| (game->dir == 't' && game->evr->map[x - 1][y] == 'E'))
		attaque_anim(game, x - 1, y, 1);
	else if ((game->dir == 'r' && game->evr->map[x][y + 1] == '0')
		|| (game->dir == 'r' && game->evr->map[x][y + 1] == 'H')
		|| (game->dir == 'r' && game->evr->map[x][y + 1] == 'E'))
		attaque_anim(game, x, y + 1, 2);
	else if ((game->dir == 'l' && game->evr->map[x][y - 1] == '0')
		|| (game->dir == 'l' && game->evr->map[x][y - 1] == 'H')
		|| (game->dir == 'l' && game->evr->map[x][y - 1] == 'E'))
		attaque_anim(game, x, y - 1, 3);
}

void	attaque_anim(t_game *game, int x, int y, int i)
{
	game->i = 0;
	if (game->evr->map[x][y] == 'H')
	{
		game->evr->map[x][y] = '0';
		mlx_put_image_to_window(game->evr->mlx, game->evr->mlx_win,
			game->asset->ground, y * 64, x * 64);
	}
	while (game->anim <= 2)
	{
		compteur_att(game);
		mlx_put_image_to_window(game->evr->mlx, game->evr->mlx_win,
			game->asset->attack[i][game->anim], game->pos_player[1] * 64,
			game->pos_player[0] * 64);
	}
	mlx_put_image_to_window(game->evr->mlx, game->evr->mlx_win,
		game->asset->sprite_mouv[i][4], game->pos_player[1] * 64,
		game->pos_player[0] * 64);
	game->anim = 0;
}
