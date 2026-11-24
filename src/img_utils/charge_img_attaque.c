#include "../../include/header/so_long.h"

void	charge_img_attack_face(t_game *game)
{
	game->asset->attack[0][0] = mlx_xpm_file_to_image(game->evr->mlx,
			"asset/attaque/attack_face1.xpm", &game->asset->asset_width,
			&game->asset->asset_height);
	game->asset->attack[0][1] = mlx_xpm_file_to_image(game->evr->mlx,
			"asset/attaque/attack_face2.xpm", &game->asset->asset_width,
			&game->asset->asset_height);
	game->asset->attack[0][2] = mlx_xpm_file_to_image(game->evr->mlx,
			"asset/attaque/attack_face3.xpm", &game->asset->asset_width,
			&game->asset->asset_height);
	game->asset->attack[0][3] = mlx_xpm_file_to_image(game->evr->mlx,
			"asset/attaque/attack_face4.xpm", &game->asset->asset_width,
			&game->asset->asset_height);
	charge_img_attack_dos(game);
}

void	charge_img_attack_dos(t_game *game)
{
	game->asset->attack[1][0] = mlx_xpm_file_to_image(game->evr->mlx,
			"asset/attaque/attack_dos1.xpm", &game->asset->asset_width,
			&game->asset->asset_height);
	game->asset->attack[1][1] = mlx_xpm_file_to_image(game->evr->mlx,
			"asset/attaque/attack_dos2.xpm", &game->asset->asset_width,
			&game->asset->asset_height);
	game->asset->attack[1][2] = mlx_xpm_file_to_image(game->evr->mlx,
			"asset/attaque/attack_dos3.xpm", &game->asset->asset_width,
			&game->asset->asset_height);
	game->asset->attack[1][3] = mlx_xpm_file_to_image(game->evr->mlx,
			"asset/attaque/attack_dos4.xpm", &game->asset->asset_width,
			&game->asset->asset_height);
	charge_img_attack_right(game);
}

void	charge_img_attack_right(t_game *game)
{
	game->asset->attack[2][0] = mlx_xpm_file_to_image(game->evr->mlx,
			"asset/attaque/attack_r1.xpm", &game->asset->asset_width,
			&game->asset->asset_height);
	game->asset->attack[2][1] = mlx_xpm_file_to_image(game->evr->mlx,
			"asset/attaque/attack_r2.xpm", &game->asset->asset_width,
			&game->asset->asset_height);
	game->asset->attack[2][2] = mlx_xpm_file_to_image(game->evr->mlx,
			"asset/attaque/attack_r3.xpm", &game->asset->asset_width,
			&game->asset->asset_height);
	game->asset->attack[2][3] = mlx_xpm_file_to_image(game->evr->mlx,
			"asset/attaque/attack_r4.xpm", &game->asset->asset_width,
			&game->asset->asset_height);
	charge_img_attack_left(game);
}

void	charge_img_attack_left(t_game *game)
{
	game->asset->attack[3][0] = mlx_xpm_file_to_image(game->evr->mlx,
			"asset/attaque/attack_l1.xpm", &game->asset->asset_width,
			&game->asset->asset_height);
	game->asset->attack[3][1] = mlx_xpm_file_to_image(game->evr->mlx,
			"asset/attaque/attack_l2.xpm", &game->asset->asset_width,
			&game->asset->asset_height);
	game->asset->attack[3][2] = mlx_xpm_file_to_image(game->evr->mlx,
			"asset/attaque/attack_l3.xpm", &game->asset->asset_width,
			&game->asset->asset_height);
	game->asset->attack[3][3] = mlx_xpm_file_to_image(game->evr->mlx,
			"asset/attaque/attack_l4.xpm", &game->asset->asset_width,
			&game->asset->asset_height);
}
