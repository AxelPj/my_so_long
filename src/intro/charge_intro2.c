/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   charge_intro2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axelpeti <axelpeti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 14:27:26 by axelpeti          #+#    #+#             */
/*   Updated: 2025/02/25 22:41:08 by axelpeti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/header/so_long.h"

void	charge_intro7(t_intro *intro)
{
	intro->op[48] = mlx_xpm_file_to_image(intro->mlx2,
			"asset/intro/49.xpm", &intro->intro_width, &intro->intro_height);
	intro->op[49] = mlx_xpm_file_to_image(intro->mlx2,
			"asset/intro/50.xpm", &intro->intro_width, &intro->intro_height);
	intro->op[50] = mlx_xpm_file_to_image(intro->mlx2,
			"asset/intro/51.xpm", &intro->intro_width, &intro->intro_height);
	intro->op[51] = mlx_xpm_file_to_image(intro->mlx2,
			"asset/intro/52.xpm", &intro->intro_width, &intro->intro_height);
	intro->op[52] = mlx_xpm_file_to_image(intro->mlx2,
			"asset/intro/53.xpm", &intro->intro_width, &intro->intro_height);
	intro->op[53] = mlx_xpm_file_to_image(intro->mlx2,
			"asset/intro/54.xpm", &intro->intro_width, &intro->intro_height);
	intro->op[54] = mlx_xpm_file_to_image(intro->mlx2,
			"asset/intro/55.xpm", &intro->intro_width, &intro->intro_height);
	intro->op[55] = mlx_xpm_file_to_image(intro->mlx2,
			"asset/intro/56.xpm", &intro->intro_width, &intro->intro_height);
}

void	charge_intro8(t_intro *intro)
{
	intro->op[56] = mlx_xpm_file_to_image(intro->mlx2,
			"asset/intro/57.xpm", &intro->intro_width, &intro->intro_height);
	intro->op[57] = mlx_xpm_file_to_image(intro->mlx2,
			"asset/intro/58.xpm", &intro->intro_width, &intro->intro_height);
	intro->op[58] = mlx_xpm_file_to_image(intro->mlx2,
			"asset/intro/59.xpm", &intro->intro_width, &intro->intro_height);
	intro->op[59] = mlx_xpm_file_to_image(intro->mlx2,
			"asset/intro/60.xpm", &intro->intro_width, &intro->intro_height);
}

void	charge_intro_all(t_intro *intro)
{
	charge_intro1(intro);
	charge_intro2(intro);
	charge_intro3(intro);
	charge_intro4(intro);
	charge_intro5(intro);
	charge_intro6(intro);
	charge_intro7(intro);
	charge_intro8(intro);
}
