#include "../../include/header/so_long.h"

void	charge_img_ssj(t_game *game)
{
	game->asset->ssj[0] = mlx_xpm_file_to_image(game->evr->mlx,
			"asset/ssj1/super1.xpm", &game->asset->asset_width,
			&game->asset->asset_height);
	if (!game->asset->ssj[0])
	{
		perror("Failed to load item sprite face");
		exit(EXIT_FAILURE);
	}
	game->asset->ssj[1] = mlx_xpm_file_to_image(game->evr->mlx,
			"asset/ssj1/super2.xpm", &game->asset->asset_width,
			&game->asset->asset_height);
	if (!game->asset->ssj[1])
	{
		perror("Failed to load item sprite face2");
		exit(EXIT_FAILURE);
	}
	game->asset->ssj[2] = mlx_xpm_file_to_image(game->evr->mlx,
			"asset/ssj1/super3.xpm", &game->asset->asset_width,
			&game->asset->asset_height);
	if (!game->asset->ssj[2])
	{
		perror("Failed to load item sprite face3");
		exit(EXIT_FAILURE);
	}
	charge_img_ssj2(game);
}

void	charge_img_ssj2(t_game *game)
{
	game->asset->ssj[3] = mlx_xpm_file_to_image(game->evr->mlx,
			"asset/ssj1/super4.xpm", &game->asset->asset_width,
			&game->asset->asset_height);
	if (!game->asset->ssj[3])
	{
		perror("Failed to load item sprite face4");
		exit(EXIT_FAILURE);
	}
	game->asset->ssj[4] = mlx_xpm_file_to_image(game->evr->mlx,
			"asset/ssj1/super5.xpm", &game->asset->asset_width,
			&game->asset->asset_height);
	if (!game->asset->ssj[4])
	{
		perror("Failed to load item sprite face5");
		exit(EXIT_FAILURE);
	}
	game->asset->ssj[5] = mlx_xpm_file_to_image(game->evr->mlx,
			"asset/ssj1/super6.xpm", &game->asset->asset_width,
			&game->asset->asset_height);
	if (!game->asset->ssj[5])
	{
		perror("Failed to load item sprite dos 1");
		exit(EXIT_FAILURE);
	}
	charge_img_ssj3(game);
}

void	charge_img_ssj3(t_game *game)
{
	game->asset->ssj[6] = mlx_xpm_file_to_image(game->evr->mlx,
			"asset/ssj1/super7.xpm", &game->asset->asset_width,
			&game->asset->asset_height);
	if (!game->asset->ssj[6])
	{
		perror("Failed to load item sprite dos 2");
		exit(EXIT_FAILURE);
	}
	game->asset->ssj[7] = mlx_xpm_file_to_image(game->evr->mlx,
			"asset/ssj1/super8.xpm", &game->asset->asset_width,
			&game->asset->asset_height);
	if (!game->asset->ssj[7])
	{
		perror("Failed to load item sprite dos 3");
		exit(EXIT_FAILURE);
	}
	game->asset->ssj[8] = mlx_xpm_file_to_image(game->evr->mlx,
			"asset/ssj1/super9.xpm", &game->asset->asset_width,
			&game->asset->asset_height);
	if (!game->asset->ssj[8])
	{
		perror("Failed to load item sprite dos 4");
		exit(EXIT_FAILURE);
	}
	charge_img_ssj4(game);
}

void	charge_img_ssj4(t_game *game)
{
	game->asset->ssj[9] = mlx_xpm_file_to_image(game->evr->mlx,
			"asset/ssj1/super10.xpm", &game->asset->asset_width,
			&game->asset->asset_height);
	if (!game->asset->ssj[9])
	{
		perror("Failed to load item sprite dos 5");
		exit(EXIT_FAILURE);
	}
	game->asset->ssj[10] = mlx_xpm_file_to_image(game->evr->mlx,
			"asset/ssj1/super11.xpm", &game->asset->asset_width,
			&game->asset->asset_height);
	if (!game->asset->ssj[10])
	{
		perror("Failed to load item sprite dos 4");
		exit(EXIT_FAILURE);
	}
	game->asset->ssj[11] = mlx_xpm_file_to_image(game->evr->mlx,
			"asset/ssj1/super12.xpm", &game->asset->asset_width,
			&game->asset->asset_height);
	if (!game->asset->ssj[11])
	{
		perror("Failed to load item sprite dos 4");
		exit(EXIT_FAILURE);
	}
	charge_img_end_ssj(game);
}

void	charge_img_end_ssj(t_game *game) //sprite top
{
	game->asset->ssj[12] = mlx_xpm_file_to_image(game->evr->mlx,
			"asset/ssj1/ssj_end1.xpm", &game->asset->asset_width,
			&game->asset->asset_height);
	game->asset->ssj[13] = mlx_xpm_file_to_image(game->evr->mlx,
			"asset/ssj1/ssj_end2.xpm", &game->asset->asset_width,
			&game->asset->asset_height);
	game->asset->ssj[14] = mlx_xpm_file_to_image(game->evr->mlx,
			"asset/ssj1/ssj_end3.xpm", &game->asset->asset_width,
			&game->asset->asset_height);
	game->asset->ssj[15] = mlx_xpm_file_to_image(game->evr->mlx,
			"asset/ssj1/ssj_end4.xpm", &game->asset->asset_width,
			&game->asset->asset_height);
}
