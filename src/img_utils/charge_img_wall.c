/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   charge_img_wall.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axelpeti <axelpeti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 15:05:03 by axelpeti          #+#    #+#             */
/*   Updated: 2025/02/26 18:03:47 by axelpeti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/header/so_long.h"

void	charge_img_all(t_game *game)
{
	charge_img1(game);
	charge_img_evr(game);
	charge_img_sprite(game);
	charge_img_ssj(game);
	charge_img_sprite_ssj(game);
	charge_img_kameha_face(game);
	charge_img_kame_face(game);
	charge_img_attack_face(game);
}

void	charge_img1(t_game *game)
{
	game->asset->top_left = mlx_xpm_file_to_image(game->evr->mlx,
			"asset/map/top_left.xpm", &game->asset->asset_width,
			&game->asset->asset_height);
	if (!game->asset->top_left)
	{
		perror("Failed to load top left image");
		exit(EXIT_FAILURE);
	}
	game->asset->top_right = mlx_xpm_file_to_image(game->evr->mlx,
			"asset/map/top_right.xpm", &game->asset->asset_width,
			&game->asset->asset_height);
	if (!game->asset->top_right)
	{
		perror("Failed to load top right image");
		exit(EXIT_FAILURE);
	}
	game->asset->bottom_left = mlx_xpm_file_to_image(game->evr->mlx,
			"asset/map/bottom_left.xpm", &game->asset->asset_width,
			&game->asset->asset_height);
	if (!game->asset->bottom_left)
	{
		perror("Failed to load bottom left image");
		exit(EXIT_FAILURE);
	}
	charge_img2(game);
}

void	charge_img2(t_game *game)
{
	game->asset->bottom_right = mlx_xpm_file_to_image(game->evr->mlx,
			"asset/map/bottom_right.xpm", &game->asset->asset_width,
			&game->asset->asset_height);
	if (!game->asset->bottom_right)
	{
		perror("Failed to load bottom right image");
		exit(EXIT_FAILURE);
	}
	game->asset->top = mlx_xpm_file_to_image(game->evr->mlx,
			"asset/map/top.xpm", &game->asset->asset_width,
			&game->asset->asset_height);
	if (!game->asset->top)
	{
		perror("Failed to load top image");
		exit(EXIT_FAILURE);
	}
	game->asset->bottom = mlx_xpm_file_to_image(game->evr->mlx,
			"asset/map/bottom.xpm", &game->asset->asset_width,
			&game->asset->asset_height);
	if (!game->asset->bottom)
	{
		perror("Failed to load bottom image");
		exit(EXIT_FAILURE);
	}
	charge_img3(game);
}

void	charge_img3(t_game *game)
{
	game->asset->left = mlx_xpm_file_to_image(game->evr->mlx,
			"asset/map/left.xpm", &game->asset->asset_width,
			&game->asset->asset_height);
	if (!game->asset->left)
	{
		perror("Failed to load left image");
		exit(EXIT_FAILURE);
	}
	game->asset->right = mlx_xpm_file_to_image(game->evr->mlx,
			"asset/map/right.xpm", &game->asset->asset_width,
			&game->asset->asset_height);
	if (!game->asset->right)
	{
		perror("Failed to load right image");
		exit(EXIT_FAILURE);
	}
	charge_img4(game);
}

void	charge_img4(t_game *game)
{
	game->asset->internal = mlx_xpm_file_to_image(game->evr->mlx,
			"asset/map/roc.xpm", &game->asset->asset_width,
			&game->asset->asset_height);
	if (!game->asset->internal)
	{
		perror("Failed to load internal image");
		exit(EXIT_FAILURE);
	}
	game->asset->ground = mlx_xpm_file_to_image(game->evr->mlx,
			"asset/map/ground.xpm", &game->asset->asset_width,
			&game->asset->asset_height);
	if (!game->asset->ground)
	{
		perror("Failed to load internal image");
		exit(EXIT_FAILURE);
	}
	game->asset->icone[0] = mlx_xpm_file_to_image(game->evr->mlx,
			"asset/perso/icone.xpm", &game->asset->asset_width,
			&game->asset->asset_height);
	game->asset->icone[1] = mlx_xpm_file_to_image(game->evr->mlx,
			"asset/perso/icone2.xpm", &game->asset->asset_width,
			&game->asset->asset_height);
}
