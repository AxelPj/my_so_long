/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   change_map.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axelpeti <axelpeti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/01 14:50:06 by axelpeti          #+#    #+#             */
/*   Updated: 2025/03/11 17:17:05 by axelpeti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/header/so_long.h"

void	set_corner(t_game *game, int i, int j)
{
	if (i == 0 && j == 0)
		game->evr->map[i][j] = '1';
	else if (i == 0 && j == game->evr->width - 1)
		game->evr->map[i][j] = '3';
	else if (i == game->evr->height - 1 && j == game->evr->width - 1)
		game->evr->map[i][j] = '5';
	else if (i == game->evr->height - 1 && j == 0)
		game->evr->map[i][j] = '7';
}

void	set_top_and_bottom_lines(t_game *game, int i, int j)
{
	if (i == 0 && j != 0 && j != game->evr->width - 1)
		game->evr->map[i][j] = '2';
	else if (i == game->evr->height - 1 && j != 0 && j != game->evr->width - 1)
		game->evr->map[i][j] = '6';
}

void	set_sides(t_game *game, int i, int j)
{
	if (j == game->evr->width - 1 && i != game->evr->height - 1 && i != 0)
		game->evr->map[i][j] = '4';
	else if (j == 0 && i != 0 && i != game->evr->height - 1)
		game->evr->map[i][j] = '8';
}

void	change_wall(t_game *game)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (game->evr->map[0][game->evr->width - 1] == '\n')
		game->evr->width--;
	while (i < game->evr->height)
	{
		j = 0;
		while (game->evr->map[i][j] && game->evr->map[i][j] != '\n')
		{
			set_corner(game, i, j);
			set_top_and_bottom_lines(game, i, j);
			set_sides(game, i, j);
			j++;
		}
		i++;
	}
	change_internal_walls(game);
}

void	change_internal_walls(t_game *game)
{
	int	i;
	int	j;

	i = 1;
	while (i < game->evr->height - 1)
	{
		j = 1;
		while (j < game->evr->width - 1)
		{
			if (game->evr->map[i][j] == '1')
				game->evr->map[i][j] = '9';
			j++;
		}
		i++;
	}
}
