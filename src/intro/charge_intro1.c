/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   charge_intro1.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axelpeti <axelpeti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 14:06:03 by axelpeti          #+#    #+#             */
/*   Updated: 2025/02/25 22:37:52 by axelpeti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/header/so_long.h"

void	charge_intro1(t_intro *intro)
{
	intro->op[0] = mlx_xpm_file_to_image(intro->mlx2,
			"asset/intro/1.xpm", &intro->intro_width, &intro->intro_height);
	intro->op[1] = mlx_xpm_file_to_image(intro->mlx2,
			"asset/intro/2.xpm", &intro->intro_width, &intro->intro_height);
	intro->op[2] = mlx_xpm_file_to_image(intro->mlx2,
			"asset/intro/3.xpm", &intro->intro_width, &intro->intro_height);
	intro->op[3] = mlx_xpm_file_to_image(intro->mlx2,
			"asset/intro/4.xpm", &intro->intro_width, &intro->intro_height);
	intro->op[4] = mlx_xpm_file_to_image(intro->mlx2,
			"asset/intro/5.xpm", &intro->intro_width, &intro->intro_height);
	intro->op[5] = mlx_xpm_file_to_image(intro->mlx2,
			"asset/intro/6.xpm", &intro->intro_width, &intro->intro_height);
	intro->op[6] = mlx_xpm_file_to_image(intro->mlx2,
			"asset/intro/7.xpm", &intro->intro_width, &intro->intro_height);
	intro->op[7] = mlx_xpm_file_to_image(intro->mlx2,
			"asset/intro/8.xpm", &intro->intro_width, &intro->intro_height);
}

void	charge_intro2(t_intro *intro)
{
	intro->op[8] = mlx_xpm_file_to_image(intro->mlx2,
			"asset/intro/9.xpm", &intro->intro_width, &intro->intro_height);
	intro->op[9] = mlx_xpm_file_to_image(intro->mlx2,
			"asset/intro/10.xpm", &intro->intro_width, &intro->intro_height);
	intro->op[10] = mlx_xpm_file_to_image(intro->mlx2,
			"asset/intro/11.xpm", &intro->intro_width, &intro->intro_height);
	intro->op[11] = mlx_xpm_file_to_image(intro->mlx2,
			"asset/intro/12.xpm", &intro->intro_width, &intro->intro_height);
	intro->op[12] = mlx_xpm_file_to_image(intro->mlx2,
			"asset/intro/13.xpm", &intro->intro_width, &intro->intro_height);
	intro->op[13] = mlx_xpm_file_to_image(intro->mlx2,
			"asset/intro/14.xpm", &intro->intro_width, &intro->intro_height);
	intro->op[14] = mlx_xpm_file_to_image(intro->mlx2,
			"asset/intro/15.xpm", &intro->intro_width, &intro->intro_height);
	intro->op[15] = mlx_xpm_file_to_image(intro->mlx2,
			"asset/intro/16.xpm", &intro->intro_width, &intro->intro_height);
}

void	charge_intro3(t_intro *intro)
{
	intro->op[16] = mlx_xpm_file_to_image(intro->mlx2,
			"asset/intro/17.xpm", &intro->intro_width, &intro->intro_height);
	intro->op[17] = mlx_xpm_file_to_image(intro->mlx2,
			"asset/intro/18.xpm", &intro->intro_width, &intro->intro_height);
	intro->op[18] = mlx_xpm_file_to_image(intro->mlx2,
			"asset/intro/19.xpm", &intro->intro_width, &intro->intro_height);
	intro->op[19] = mlx_xpm_file_to_image(intro->mlx2,
			"asset/intro/20.xpm", &intro->intro_width, &intro->intro_height);
	intro->op[20] = mlx_xpm_file_to_image(intro->mlx2,
			"asset/intro/21.xpm", &intro->intro_width, &intro->intro_height);
	intro->op[21] = mlx_xpm_file_to_image(intro->mlx2,
			"asset/intro/22.xpm", &intro->intro_width, &intro->intro_height);
	intro->op[22] = mlx_xpm_file_to_image(intro->mlx2,
			"asset/intro/23.xpm", &intro->intro_width, &intro->intro_height);
	intro->op[23] = mlx_xpm_file_to_image(intro->mlx2,
			"asset/intro/24.xpm", &intro->intro_width, &intro->intro_height);
}
