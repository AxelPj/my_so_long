/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_init_struct.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axelpeti <axelpeti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 18:20:06 by axelpeti          #+#    #+#             */
/*   Updated: 2025/03/17 16:35:44 by axelpeti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/header/so_long.h"

void	init_struct(t_game *game, char *chemin_map)
{
	game->evr = malloc(sizeof(t_evr));
	game->asset = malloc(sizeof(t_asset));
	game->evr->path_map = ft_strdup(chemin_map);
	parse_map(game);
	game->evr->width = ft_strlen(game->evr->map[0]);
	game->evr->height = count_map(game);
	game->pos_player = malloc(sizeof(int) * 2);
	if (!game->pos_player)
	{
		perror("pos_player is not initialized");
		exit(EXIT_FAILURE);
	}
	find_start(game);
	game->evr->exit = 0;
	game->evr->player = 0;
	game->evr->nb_c = 0;
	game->last_dir = 0;
	game->evr->mlx = NULL;
	game->evr->mlx = mlx_init();
	if (!game->evr->mlx)
	{
		perror("Failed to initialize mlx");
		exit(EXIT_FAILURE);
	}
	init_sprite(game, 0);
}

void	init_sprite(t_game *game, int i)
{
	game->asset->sprite_mouv = malloc(4 * sizeof(void *));
	game->asset->attack = malloc(4 * sizeof(void *));
	game->asset->attack_ssj = malloc(4 * sizeof(void *));
	game->asset->kameha_sprite = malloc(4 * sizeof(void *));
	game->asset->sprite_ssj = malloc(4 * sizeof(void *));
	game->asset->ssj = malloc(16 * sizeof(void *));
	game->asset->icone = malloc(2 * sizeof(void *));
	while (i < 4)
	{
		game->asset->sprite_mouv[i] = malloc(5 * sizeof(void *));
		game->asset->sprite_ssj[i] = malloc(5 * sizeof(void *));
		game->asset->kameha_sprite[i] = malloc(7 * sizeof(void *));
		game->asset->attack_ssj[i] = malloc(3 * sizeof(void *));
		game->asset->attack[i] = malloc(4 * sizeof(void *));
		i++;
	}
	game->i = 0;
	game->anim = 0;
	game->ssj_on = 0;
	game->dir = 'b';
	game->deplacement = 0;
	game->j = 0;
	charge_img_all(game);
}
