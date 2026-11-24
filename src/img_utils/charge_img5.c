/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   charge_img5.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axelpeti <axelpeti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/23 15:50:58 by axelpeti          #+#    #+#             */
/*   Updated: 2025/02/26 18:04:25 by axelpeti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/header/so_long.h"

void	charge_img_sprite_ssj5(t_game *game)
{
	game->asset->sprite_ssj[2][0] = mlx_xpm_file_to_image(game->evr->mlx,
			"asset/ssj1/ssj_right1.xpm", &game->asset->asset_width,
			&game->asset->asset_height);
	if (!game->asset->sprite_ssj[2][0])
	{
		perror("Failed to load item sprite right 1");
		exit(EXIT_FAILURE);
	}
	game->asset->sprite_ssj[2][1] = mlx_xpm_file_to_image(game->evr->mlx,
			"asset/ssj1/ssj_right2.xpm", &game->asset->asset_width,
			&game->asset->asset_height);
	if (!game->asset->sprite_ssj[2][1])
	{
		perror("Failed to load item sprite right 2");
		exit(EXIT_FAILURE);
	}
	game->asset->sprite_ssj[2][2] = mlx_xpm_file_to_image(game->evr->mlx,
			"asset/ssj1/ssj_right3.xpm", &game->asset->asset_width,
			&game->asset->asset_height);
	if (!game->asset->sprite_ssj[2][2])
	{
		perror("Failed to load item sprite right 3");
		exit(EXIT_FAILURE);
	}
	charge_img_sprite_ssj6(game);
}

void	charge_img_sprite_ssj6(t_game *game)
{
	game->asset->sprite_ssj[2][3] = mlx_xpm_file_to_image(game->evr->mlx,
			"asset/ssj1/ssj_right4.xpm", &game->asset->asset_width,
			&game->asset->asset_height);
	if (!game->asset->sprite_ssj[2][3])
	{
		perror("Failed to load item sprite right 4");
		exit(EXIT_FAILURE);
	}
	game->asset->sprite_ssj[2][4] = mlx_xpm_file_to_image(game->evr->mlx,
			"asset/ssj1/ssj_right5.xpm", &game->asset->asset_width,
			&game->asset->asset_height);
	if (!game->asset->sprite_ssj[2][4])
	{
		perror("Failed to load item sprite right 5");
		exit(EXIT_FAILURE);
	}
	charge_img_sprite_ssj7(game);
}

void	charge_img_sprite_ssj7(t_game *game)
{
	game->asset->sprite_ssj[3][0] = mlx_xpm_file_to_image(game->evr->mlx,
			"asset/ssj1/ssj_left1.xpm", &game->asset->asset_width,
			&game->asset->asset_height);
	if (!game->asset->sprite_ssj[3][0])
	{
		perror("Failed to load item sprite left 1");
		exit(EXIT_FAILURE);
	}
	game->asset->sprite_ssj[3][1] = mlx_xpm_file_to_image(game->evr->mlx,
			"asset/ssj1/ssj_left2.xpm", &game->asset->asset_width,
			&game->asset->asset_height);
	if (!game->asset->sprite_ssj[3][1])
	{
		perror("Failed to load item sprite left 2");
		exit(EXIT_FAILURE);
	}
	game->asset->sprite_ssj[3][2] = mlx_xpm_file_to_image(game->evr->mlx,
			"asset/ssj1/ssj_left3.xpm", &game->asset->asset_width,
			&game->asset->asset_height);
	if (!game->asset->sprite_ssj[3][2])
	{
		perror("Failed to load item sprite left 3");
		exit(EXIT_FAILURE);
	}
	charge_img_sprite_ssj8(game);
}

void	charge_img_sprite_ssj8(t_game *game)
{
	game->asset->sprite_ssj[3][3] = mlx_xpm_file_to_image(game->evr->mlx,
			"asset/ssj1/ssj_left4.xpm", &game->asset->asset_width,
			&game->asset->asset_height);
	if (!game->asset->sprite_ssj[3][3])
	{
		perror("Failed to load item sprite left 4");
		exit(EXIT_FAILURE);
	}
	game->asset->sprite_ssj[3][4] = mlx_xpm_file_to_image(game->evr->mlx,
			"asset/ssj1/ssj_left5.xpm", &game->asset->asset_width,
			&game->asset->asset_height);
	if (!game->asset->sprite_ssj[3][4])
	{
		perror("Failed to load item sprite left 5");
		exit(EXIT_FAILURE);
	}
}
