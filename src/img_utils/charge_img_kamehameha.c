#include "../../include/header/so_long.h"

void	charge_img_kameha_face(t_game *game)
{
	game->asset->kameha_sprite[0][0] = mlx_xpm_file_to_image(game->evr->mlx,
			"asset/kame/kameha.xpm", &game->asset->asset_width,
			&game->asset->asset_height);
	game->asset->kameha_sprite[0][1] = mlx_xpm_file_to_image(game->evr->mlx,
			"asset/kame/kameha_face1.xpm", &game->asset->asset_width,
			&game->asset->asset_height);
	game->asset->kameha_sprite[0][2] = mlx_xpm_file_to_image(game->evr->mlx,
			"asset/kame/kameha_face2.xpm", &game->asset->asset_width,
			&game->asset->asset_height);
	game->asset->kameha_sprite[0][3] = mlx_xpm_file_to_image(game->evr->mlx,
			"asset/kame/kameha_face3.xpm", &game->asset->asset_width,
			&game->asset->asset_height);
	game->asset->kameha_sprite[0][4] = mlx_xpm_file_to_image(game->evr->mlx,
			"asset/kame/kameha_face4.xpm", &game->asset->asset_width,
			&game->asset->asset_height);
	game->asset->kameha_sprite[0][5] = mlx_xpm_file_to_image(game->evr->mlx,
			"asset/kame/kameha_face5.xpm", &game->asset->asset_width,
			&game->asset->asset_height);
	game->asset->kameha_sprite[0][6] = mlx_xpm_file_to_image(game->evr->mlx,
			"asset/kame/kameha_body_face.xpm", &game->asset->asset_width,
			&game->asset->asset_height);
	charge_img_kameha_dos(game);
}

void	charge_img_kameha_dos(t_game *game)
{
	game->asset->kameha_sprite[1][0] = mlx_xpm_file_to_image(game->evr->mlx,
			"asset/kame/kameha.xpm", &game->asset->asset_width,
			&game->asset->asset_height);
	game->asset->kameha_sprite[1][1] = mlx_xpm_file_to_image(game->evr->mlx,
			"asset/kame/kameha_dos1.xpm", &game->asset->asset_width,
			&game->asset->asset_height);
	game->asset->kameha_sprite[1][2] = mlx_xpm_file_to_image(game->evr->mlx,
			"asset/kame/kameha_dos2.xpm", &game->asset->asset_width,
			&game->asset->asset_height);
	game->asset->kameha_sprite[1][3] = mlx_xpm_file_to_image(game->evr->mlx,
			"asset/kame/kameha_dos3.xpm", &game->asset->asset_width,
			&game->asset->asset_height);
	game->asset->kameha_sprite[1][4] = mlx_xpm_file_to_image(game->evr->mlx,
			"asset/kame/kameha_dos4.xpm", &game->asset->asset_width,
			&game->asset->asset_height);
	game->asset->kameha_sprite[1][5] = mlx_xpm_file_to_image(game->evr->mlx,
			"asset/kame/kameha_dos5.xpm", &game->asset->asset_width,
			&game->asset->asset_height);
	game->asset->kameha_sprite[1][6] = mlx_xpm_file_to_image(game->evr->mlx,
			"asset/kame/kameha_body_dos.xpm", &game->asset->asset_width,
			&game->asset->asset_height);
	charge_img_kameha_right(game);
}

void	charge_img_kameha_right(t_game *game)
{
	game->asset->kameha_sprite[2][0] = mlx_xpm_file_to_image(game->evr->mlx,
			"asset/kame/kameha.xpm", &game->asset->asset_width,
			&game->asset->asset_height);
	game->asset->kameha_sprite[2][1] = mlx_xpm_file_to_image(game->evr->mlx,
			"asset/kame/kameha_r1.xpm", &game->asset->asset_width,
			&game->asset->asset_height);
	game->asset->kameha_sprite[2][2] = mlx_xpm_file_to_image(game->evr->mlx,
			"asset/kame/kameha_r2.xpm", &game->asset->asset_width,
			&game->asset->asset_height);
	game->asset->kameha_sprite[2][3] = mlx_xpm_file_to_image(game->evr->mlx,
			"asset/kame/kameha_r3.xpm", &game->asset->asset_width,
			&game->asset->asset_height);
	game->asset->kameha_sprite[2][4] = mlx_xpm_file_to_image(game->evr->mlx,
			"asset/kame/kameha_r4.xpm", &game->asset->asset_width,
			&game->asset->asset_height);
	game->asset->kameha_sprite[2][5] = mlx_xpm_file_to_image(game->evr->mlx,
			"asset/kame/kameha_r5.xpm", &game->asset->asset_width,
			&game->asset->asset_height);
	game->asset->kameha_sprite[2][6] = mlx_xpm_file_to_image(game->evr->mlx,
			"asset/kame/kameha_body_r.xpm", &game->asset->asset_width,
			&game->asset->asset_height);
	charge_img_kameha_left(game);
}

void	charge_img_kameha_left(t_game *game)
{
	game->asset->kameha_sprite[3][0] = mlx_xpm_file_to_image(game->evr->mlx,
			"asset/kame/kameha.xpm", &game->asset->asset_width,
			&game->asset->asset_height);
	game->asset->kameha_sprite[3][1] = mlx_xpm_file_to_image(game->evr->mlx,
			"asset/kame/kameha_l1.xpm", &game->asset->asset_width,
			&game->asset->asset_height);
	game->asset->kameha_sprite[3][2] = mlx_xpm_file_to_image(game->evr->mlx,
			"asset/kame/kameha_l2.xpm", &game->asset->asset_width,
			&game->asset->asset_height);
	game->asset->kameha_sprite[3][3] = mlx_xpm_file_to_image(game->evr->mlx,
			"asset/kame/kameha_l3.xpm", &game->asset->asset_width,
			&game->asset->asset_height);
	game->asset->kameha_sprite[3][4] = mlx_xpm_file_to_image(game->evr->mlx,
			"asset/kame/kameha_l4.xpm", &game->asset->asset_width,
			&game->asset->asset_height);
	game->asset->kameha_sprite[3][5] = mlx_xpm_file_to_image(game->evr->mlx,
			"asset/kame/kameha_l5.xpm", &game->asset->asset_width,
			&game->asset->asset_height);
	game->asset->kameha_sprite[3][6] = mlx_xpm_file_to_image(game->evr->mlx,
			"asset/kame/kameha_body_l.xpm", &game->asset->asset_width,
			&game->asset->asset_height);
}
