/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   verif_map.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axelpeti <axelpeti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 17:07:55 by axelpeti          #+#    #+#             */
/*   Updated: 2025/03/17 16:28:06 by axelpeti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/header/so_long.h"

int	verif_all(t_game *game)
{
	if (verif_wall_and_line(game) == 1 || verif_param(game) == 1
		|| flood_files1(game) == 1)
		return (1);
	else
		return (0);
}

int	verif_wall_and_line(t_game *game)
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
			if (i == 0 || i == game->evr->height - 1
				|| j == 0 || j == game->evr->width - 1)
			{
				if (game->evr->map[i][j] != '1')
					return (1);
			}
			j++;
		}
		if (j != game->evr->width)
			return (1);
		i++;
	}
	return (0);
}

int	verif_param(t_game *game)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < game->evr->height)
	{
		j = 0;
		while (game->evr->map[i][j] && game->evr->map[i][j] != '\n')
		{
			if (game->evr->map[i][j] == 'P')
				game->evr->player++;
			if (game->evr->map[i][j] == 'E')
				game->evr->exit++;
			if (game->evr->map[i][j] == 'C')
				game->evr->nb_c++;
			j++;
		}
		i++;
	}
	if (game->evr->player != 1 || game->evr->exit != 1 || game->evr->nb_c == 0)
		return (1);
	else
		return (0);
}

void	free_error(t_game *game)
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
	mlx_destroy_display(game->evr->mlx);
	free(game->evr->mlx);
	game->evr->mlx = NULL;
	free(game->asset);
	free(game->evr);
	exit(EXIT_FAILURE);
}
