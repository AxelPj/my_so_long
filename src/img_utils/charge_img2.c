/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   charge_img2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axelpeti <axelpeti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 19:44:10 by axelpeti          #+#    #+#             */
/*   Updated: 2025/02/26 18:04:31 by axelpeti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/header/so_long.h"

void	charge_img_sprite5(t_game *game) //sprite right
{
	game->asset->sprite_mouv[2][0] = mlx_xpm_file_to_image(game->evr->mlx,
			"asset/perso/right1.xpm", &game->asset->asset_width,
			&game->asset->asset_height);
	if (!game->asset->sprite_mouv[2][0])
	{
		perror("Failed to load item sprite right 1");
		exit(EXIT_FAILURE);
	}
	game->asset->sprite_mouv[2][1] = mlx_xpm_file_to_image(game->evr->mlx,
			"asset/perso/right2.xpm", &game->asset->asset_width,
			&game->asset->asset_height);
	if (!game->asset->sprite_mouv[2][1])
	{
		perror("Failed to load item sprite right 2");
		exit(EXIT_FAILURE);
	}
	game->asset->sprite_mouv[2][2] = mlx_xpm_file_to_image(game->evr->mlx,
			"asset/perso/right3.xpm", &game->asset->asset_width,
			&game->asset->asset_height);
	if (!game->asset->sprite_mouv[2][2])
	{
		perror("Failed to load item sprite right 3");
		exit(EXIT_FAILURE);
	}
	charge_img_sprite6(game);
}

void	charge_img_sprite6(t_game *game) //sprite right
{
	game->asset->sprite_mouv[2][3] = mlx_xpm_file_to_image(game->evr->mlx,
			"asset/perso/right4.xpm", &game->asset->asset_width,
			&game->asset->asset_height);
	if (!game->asset->sprite_mouv[2][3])
	{
		perror("Failed to load item sprite right 4");
		exit(EXIT_FAILURE);
	}
	game->asset->sprite_mouv[2][4] = mlx_xpm_file_to_image(game->evr->mlx,
			"asset/perso/right5.xpm", &game->asset->asset_width,
			&game->asset->asset_height);
	if (!game->asset->sprite_mouv[2][4])
	{
		perror("Failed to load item sprite right 5");
		exit(EXIT_FAILURE);
	}
	charge_img_sprite7(game);
}

void	charge_img_sprite7(t_game *game) //sprite left
{
	game->asset->sprite_mouv[3][0] = mlx_xpm_file_to_image(game->evr->mlx,
			"asset/perso/left1.xpm", &game->asset->asset_width,
			&game->asset->asset_height);
	if (!game->asset->sprite_mouv[3][0])
	{
		perror("Failed to load item sprite left 1");
		exit(EXIT_FAILURE);
	}
	game->asset->sprite_mouv[3][1] = mlx_xpm_file_to_image(game->evr->mlx,
			"asset/perso/left2.xpm", &game->asset->asset_width,
			&game->asset->asset_height);
	if (!game->asset->sprite_mouv[3][1])
	{
		perror("Failed to load item sprite left 2");
		exit(EXIT_FAILURE);
	}
	game->asset->sprite_mouv[3][2] = mlx_xpm_file_to_image(game->evr->mlx,
			"asset/perso/left3.xpm", &game->asset->asset_width,
			&game->asset->asset_height);
	if (!game->asset->sprite_mouv[3][2])
	{
		perror("Failed to load item sprite left 3");
		exit(EXIT_FAILURE);
	}
	charge_img_sprite8(game);
}

void	charge_img_sprite8(t_game *game) //sprite left
{
	game->asset->sprite_mouv[3][3] = mlx_xpm_file_to_image(game->evr->mlx,
			"asset/perso/left4.xpm", &game->asset->asset_width,
			&game->asset->asset_height);
	if (!game->asset->sprite_mouv[3][3])
	{
		perror("Failed to load item sprite left 4");
		exit(EXIT_FAILURE);
	}
	game->asset->sprite_mouv[3][4] = mlx_xpm_file_to_image(game->evr->mlx,
			"asset/perso/left5.xpm", &game->asset->asset_width,
			&game->asset->asset_height);
	if (!game->asset->sprite_mouv[3][4])
	{
		perror("Failed to load item sprite left 5");
		exit(EXIT_FAILURE);
	}
}
