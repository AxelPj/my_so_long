/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   charge_img_attaque_ssj.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axelpeti <axelpeti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 10:13:40 by axel              #+#    #+#             */
/*   Updated: 2025/02/26 17:54:10 by axelpeti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/header/so_long.h"

void	charge_img_kame_face(t_game *game)
{
	game->asset->attack_ssj[0][0] = mlx_xpm_file_to_image(game->evr->mlx,
			"asset/kame/kame_face1.xpm", &game->asset->asset_width,
			&game->asset->asset_height);
	game->asset->attack_ssj[0][1] = mlx_xpm_file_to_image(game->evr->mlx,
			"asset/kame/kame_face2.xpm", &game->asset->asset_width,
			&game->asset->asset_height);
	game->asset->attack_ssj[0][2] = mlx_xpm_file_to_image(game->evr->mlx,
			"asset/kame/kame_face3.xpm", &game->asset->asset_width,
			&game->asset->asset_height);
	charge_img_kame_dos(game);
}

void	charge_img_kame_dos(t_game *game)
{
	game->asset->attack_ssj[1][0] = mlx_xpm_file_to_image(game->evr->mlx,
			"asset/kame/kame_dos1.xpm", &game->asset->asset_width,
			&game->asset->asset_height);
	game->asset->attack_ssj[1][1] = mlx_xpm_file_to_image(game->evr->mlx,
			"asset/kame/kame_dos2.xpm", &game->asset->asset_width,
			&game->asset->asset_height);
	game->asset->attack_ssj[1][2] = mlx_xpm_file_to_image(game->evr->mlx,
			"asset/kame/kame_dos3.xpm", &game->asset->asset_width,
			&game->asset->asset_height);
	charge_img_kame_right(game);
}

void	charge_img_kame_right(t_game *game)
{
	game->asset->attack_ssj[2][0] = mlx_xpm_file_to_image(game->evr->mlx,
			"asset/kame/kame_r1.xpm", &game->asset->asset_width,
			&game->asset->asset_height);
	game->asset->attack_ssj[2][1] = mlx_xpm_file_to_image(game->evr->mlx,
			"asset/kame/kame_r2.xpm", &game->asset->asset_width,
			&game->asset->asset_height);
	game->asset->attack_ssj[2][2] = mlx_xpm_file_to_image(game->evr->mlx,
			"asset/kame/kame_r3.xpm", &game->asset->asset_width,
			&game->asset->asset_height);
	charge_img_kame_left(game);
}

void	charge_img_kame_left(t_game *game)
{
	game->asset->attack_ssj[3][0] = mlx_xpm_file_to_image(game->evr->mlx,
			"asset/kame/kame_l1.xpm", &game->asset->asset_width,
			&game->asset->asset_height);
	game->asset->attack_ssj[3][1] = mlx_xpm_file_to_image(game->evr->mlx,
			"asset/kame/kame_l2.xpm", &game->asset->asset_width,
			&game->asset->asset_height);
	game->asset->attack_ssj[3][2] = mlx_xpm_file_to_image(game->evr->mlx,
			"asset/kame/kame_l3.xpm", &game->asset->asset_width,
			&game->asset->asset_height);
}
