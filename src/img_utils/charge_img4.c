#include "../../include/header/so_long.h"

void	charge_img_sprite_ssj(t_game *game) //sprite face
{
	game->asset->sprite_ssj[0][0] = mlx_xpm_file_to_image(game->evr->mlx,
			"asset/ssj1/ssj_face1.xpm", &game->asset->asset_width,
			&game->asset->asset_height);
	if (!game->asset->sprite_ssj[0][0])
	{
		perror("Failed to load item sprite face");
		exit(EXIT_FAILURE);
	}
	game->asset->sprite_ssj[0][1] = mlx_xpm_file_to_image(game->evr->mlx,
			"asset/ssj1/ssj_face2.xpm", &game->asset->asset_width,
			&game->asset->asset_height);
	if (!game->asset->sprite_ssj[0][1])
	{
		perror("Failed to load item sprite face2");
		exit(EXIT_FAILURE);
	}
	game->asset->sprite_ssj[0][2] = mlx_xpm_file_to_image(game->evr->mlx,
			"asset/ssj1/ssj_face3.xpm", &game->asset->asset_width,
			&game->asset->asset_height);
	if (!game->asset->sprite_ssj[0][2])
	{
		perror("Failed to load item sprite face3");
		exit(EXIT_FAILURE);
	}
	charge_img_sprite_ssj2(game);
}

void	charge_img_sprite_ssj2(t_game *game) //sprite face
{
	game->asset->sprite_ssj[0][3] = mlx_xpm_file_to_image(game->evr->mlx,
			"asset/ssj1/ssj_face4.xpm", &game->asset->asset_width,
			&game->asset->asset_height);
	if (!game->asset->sprite_ssj[0][3])
	{
		perror("Failed to load item sprite face4");
		exit(EXIT_FAILURE);
	}
	game->asset->sprite_ssj[0][4] = mlx_xpm_file_to_image(game->evr->mlx,
			"asset/ssj1/ssj_face5.xpm", &game->asset->asset_width,
			&game->asset->asset_height);
	if (!game->asset->sprite_ssj[0][4])
	{
		perror("Failed to load item sprite face5");
		exit(EXIT_FAILURE);
	}
	charge_img_sprite_ssj3(game);
}

void	charge_img_sprite_ssj3(t_game *game)
{
	game->asset->sprite_ssj[1][0] = mlx_xpm_file_to_image(game->evr->mlx,
			"asset/ssj1/ssj_dos1.xpm", &game->asset->asset_width,
			&game->asset->asset_height);
	if (!game->asset->sprite_ssj[1][0])
	{
		perror("Failed to load item sprite dos 1");
		exit(EXIT_FAILURE);
	}
	game->asset->sprite_ssj[1][1] = mlx_xpm_file_to_image(game->evr->mlx,
			"asset/ssj1/ssj_dos2.xpm", &game->asset->asset_width,
			&game->asset->asset_height);
	if (!game->asset->sprite_ssj[1][1])
	{
		perror("Failed to load item sprite dos 2");
		exit(EXIT_FAILURE);
	}
	game->asset->sprite_ssj[1][2] = mlx_xpm_file_to_image(game->evr->mlx,
			"asset/ssj1/ssj_dos3.xpm", &game->asset->asset_width,
			&game->asset->asset_height);
	if (!game->asset->sprite_ssj[1][2])
	{
		perror("Failed to load item sprite dos 3");
		exit(EXIT_FAILURE);
	}
	charge_img_sprite_ssj4(game);
}

void	charge_img_sprite_ssj4(t_game *game)
{
	game->asset->sprite_ssj[1][3] = mlx_xpm_file_to_image(game->evr->mlx,
			"asset/ssj1/ssj_dos4.xpm", &game->asset->asset_width,
			&game->asset->asset_height);
	if (!game->asset->sprite_ssj[1][3])
	{
		perror("Failed to load item sprite dos 4");
		exit(EXIT_FAILURE);
	}
	game->asset->sprite_ssj[1][4] = mlx_xpm_file_to_image(game->evr->mlx,
			"asset/ssj1/ssj_dos5.xpm", &game->asset->asset_width,
			&game->asset->asset_height);
	if (!game->asset->sprite_ssj[1][4])
	{
		perror("Failed to load item sprite dos 5");
		exit(EXIT_FAILURE);
	}
	charge_img_sprite_ssj5(game);
}
