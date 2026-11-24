/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flood_files.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axelpeti <axelpeti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 14:34:57 by axelpeti          #+#    #+#             */
/*   Updated: 2025/03/16 17:07:43 by axelpeti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/header/so_long.h"

int	flood_files1(t_game *game)
{
	char	**map_cpy;

	map_cpy = NULL;
	map_cpy = parse_mapff(game, map_cpy);
	if (!map_cpy)
		return (1);
	flood_files2(map_cpy, game->pos_player[0], game->pos_player[1], game);
	if (verif_floodfill(map_cpy, game) == 1)
		return (free_map(map_cpy), (1));
	else
		return (free_map(map_cpy), (0));
}

void	find_start(t_game *game)
{
	int	l;
	int	c;

	l = 0;
	while (l < game->evr->height)
	{
		c = 0;
		while (game->evr->map[l][c] && game->evr->map[l][c] != '\n')
		{
			if (game->evr->map[l][c] == 'P')
			{
				game->pos_player[0] = l;
				game->pos_player[1] = c;
			}
			c++;
		}
		l++;
	}
}

void	flood_files2(char **cpymap, int l, int c, t_game *game)
{
	if (l < 0 || l >= game->evr->height || c < 0 || c >= game->evr->width)
		return ;
	if (cpymap[l][c] == '1' || cpymap[l][c] == '4'
		|| cpymap[l][c] == '\n' || cpymap[l][c] == '\0')
		return ;
	cpymap[l][c] = '4';
	if (l - 1 > 0 && cpymap[l - 1][c] != '1' && cpymap[l - 1][c] != '4')
		flood_files2(cpymap, l - 1, c, game);
	if (l + 1 < game->evr->height
		&& cpymap[l + 1][c] != '1' && cpymap[l + 1][c] != '4')
		flood_files2(cpymap, l + 1, c, game);
	if (c - 1 > 0 && cpymap[l][c - 1] != '1' && cpymap[l][c - 1] != '4')
		flood_files2(cpymap, l, c - 1, game);
	if (c + 1 < game->evr->width && cpymap[l][c + 1] != '1'
		&& cpymap[l][c + 1] != '4')
		flood_files2(cpymap, l, c + 1, game);
}

int	verif_floodfill(char **cpy_map, t_game *game)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < game->evr->height)
	{
		j = 0;
		while (cpy_map[i][j] && cpy_map[i][j] != '\n')
		{
			if (cpy_map[i][j] != '4' && cpy_map[i][j] != '1' &&
					cpy_map[i][j] != '0'
					&& cpy_map[i][j] != '\n' && cpy_map[i][j] != '\0')
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}
