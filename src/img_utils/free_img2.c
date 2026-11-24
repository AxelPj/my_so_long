/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_img2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axelpeti <axelpeti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 18:05:30 by axelpeti          #+#    #+#             */
/*   Updated: 2025/02/26 18:17:55 by axelpeti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/header/so_long.h"

void	destroy_sprite4(t_game *game, int i, int j)
{
	while (i < 4)
	{
		j = 0;
		while (j < 3)
		{
			if (game->asset->attack_ssj[i][j])
				mlx_destroy_image(game->evr->mlx,
					game->asset->attack_ssj[i][j]);
			j++;
		}
		free(game->asset->attack_ssj[i]);
		i++;
	}
	free(game->asset->attack_ssj);
}

void	destroy_sprite5(t_game *game, int i, int j)
{
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			if (game->asset->attack[i][j])
				mlx_destroy_image(game->evr->mlx,
					game->asset->attack[i][j]);
			j++;
		}
		free(game->asset->attack[i]);
		i++;
	}
	free(game->asset->attack);
}
