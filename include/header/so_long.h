/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axelpeti <axelpeti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 15:59:06 by axelpeti          #+#    #+#             */
/*   Updated: 2025/03/17 16:36:20 by axelpeti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H
# define TILES_SIZE 64
# define KAME_DELAY 45000
# define INTRO_DELAY 30000
# include "../GNL/get_next_line.h"
# include "../libft/libft.h"
# include "../minilibx/mlx.h"
# include "../printf/ft_printf.h"
# include <unistd.h>
# include <string.h>
# include <stddef.h>
# include <stdio.h>
# include <stdlib.h>
# include <X11/keysym.h>
# include <X11/X.h>
# include <sys/stat.h>

// --------------------structure--------------------//

typedef struct s_intro
{
	void	**op;
	int		i;
	int		img;
	void	*mlx2;
	void	*mlx_win2;
	int		intro_width;
	int		intro_height;
	char	*tempmap;
}	t_intro;
typedef struct s_environment
{
	int		width;
	int		height;
	int		nb_c;
	int		exit;
	int		player;
	void	*mlx;
	void	*mlx_win;
	char	**map;
	char	*path_map;
}	t_evr;
typedef struct s_asset
{
	int		asset_width;
	int		asset_height;
	// Pointeurs vers les murs chargées
	void	*top_left;
	void	*top_right;
	void	*bottom_left;
	void	*bottom_right;
	void	*top;
	void	*bottom;
	void	*left;
	void	*right;
	void	*internal;
	void	*ground;
	// Pointeurs vers les sprites chargées
	void	*exit;
	void	*item;
	void	***sprite_mouv;
	void	***sprite_ssj;
	void	***kameha_sprite;
	void	***attack_ssj;
	void	***attack;
	void	**ssj;
	void	**icone;
	void	*enemy;
}	t_asset;
typedef struct s_game
{
	int		deplacement;
	int		last_dir;
	int		ssj_on;
	int		*pos_player;
	char	dir;
	int		i;
	int		j;
	int		anim;
	t_evr	*evr;
	t_asset	*asset;
}	t_game;
// --------------------intro--------------------//
void	ini_intro(t_intro *intro, char *map);
void	charge_intro1(t_intro *intro);
void	charge_intro2(t_intro *intro);
void	charge_intro3(t_intro *intro);
void	charge_intro4(t_intro *intro);
void	charge_intro5(t_intro *intro);
void	charge_intro6(t_intro *intro);
void	charge_intro7(t_intro *intro);
void	charge_intro8(t_intro *intro);
int		key_intro(int keycode, t_intro *intro);
void	anim_intro(t_intro *intro);
void	open_intro(t_intro *intro);
int		free_intro(t_intro *intro);
void	charge_intro_all(t_intro *intro);
void	start_game(char *map);

// --------------------change_map--------------------//
void	set_corner(t_game *game, int i, int j);
void	set_top_and_bottom_lines(t_game *game, int i, int j);
void	set_sides(t_game *game, int i, int j);
void	change_wall(t_game *game);
void	change_internal_walls(t_game *game);

// --------------------utils--------------------//

void	init_struct(t_game *game, char *chemin_map);
void	init_sprite(t_game *game, int i);
void	open_windows(t_game *game);
int		open_map(t_game *game);
int		key_hook(int keycode, t_game *game);
void	draw_tile(t_game *game, char tile, int j, int i);
void	draw_tile2(t_game *game, char tile, int j, int i);
void	draw_map(t_game *game);
void	draw_img(t_game *game);
int		end_game(t_game *game);
void	compteur(t_game *game);
int		open_verif(char	*path);

// --------------------charge img--------------------//
void	charge_img_evr(t_game *game);
void	charge_img1(t_game *game);
void	charge_img2(t_game *game);
void	charge_img3(t_game *game);
void	charge_img4(t_game *game);
void	charge_img_sprite(t_game *game);
void	charge_img_sprite2(t_game *game);
void	charge_img_sprite3(t_game *game);
void	charge_img_sprite4(t_game *game);
void	charge_img_sprite5(t_game *game);
void	charge_img_sprite6(t_game *game);
void	charge_img_sprite7(t_game *game);
void	charge_img_sprite8(t_game *game);
void	charge_img_ssj(t_game *game);
void	charge_img_ssj2(t_game *game);
void	charge_img_ssj3(t_game *game);
void	charge_img_ssj4(t_game *game);
void	charge_img_sprite_ssj(t_game *game);
void	charge_img_sprite_ssj2(t_game *game);
void	charge_img_sprite_ssj3(t_game *game);
void	charge_img_sprite_ssj4(t_game *game);
void	charge_img_sprite_ssj5(t_game *game);
void	charge_img_sprite_ssj6(t_game *game);
void	charge_img_sprite_ssj7(t_game *game);
void	charge_img_sprite_ssj8(t_game *game);
void	charge_img_end_ssj(t_game *game);
void	charge_img_all(t_game *game);
void	charge_img_kameha_left(t_game *game);
void	charge_img_kameha_right(t_game *game);
void	charge_img_kameha_dos(t_game *game);
void	charge_img_kameha_face(t_game *game);
void	charge_img_kame_face(t_game *game);
void	charge_img_kame_dos(t_game *game);
void	charge_img_kame_right(t_game *game);
void	charge_img_kame_left(t_game *game);
void	charge_img_attack_face(t_game *game);
void	charge_img_attack_dos(t_game *game);
void	charge_img_attack_right(t_game *game);
void	charge_img_attack_left(t_game *game);

// --------------------free--------------------//
void	free_all(t_game *game);
void	free_map(char **map);
void	destroy_img(t_game *game);
void	destroy_sprite(t_game *game, int i, int j);
void	destroy_sprite2(t_game *game, int i);
void	free_sprite(t_game *game);
void	destroy_sprite3(t_game *game, int i, int j);
void	destroy_sprite4(t_game *game, int i, int j);
void	destroy_sprite5(t_game *game, int i, int j);
int		ft_strcmp(const char *s1, const char *s2);
void	free_error(t_game *game);

// --------------------parsing--------------------//

int		verif_all(t_game *game);
int		verif_param(t_game *game);
int		verif_wall_and_line(t_game *game);
void	parse_map(t_game *game);
int		count_map(t_game *game);
void	print_map(t_game *game);

// --------------------flood_fill--------------------//

void	find_start(t_game *game);
int		flood_files1(t_game *game);
void	flood_files2(char **cpymap, int l, int c, t_game *game);
int		verif_floodfill(char **cpy_map, t_game *game);
char	**parse_mapff(t_game *game, char **mapcpy);

// --------------------attaque--------------------//

void	attaque(t_game *game);
void	attaque_anim(t_game *game, int x, int y, int i);
void	kamehameha(t_game *game);
void	kamehameha_anim(t_game *game, int i);
void	compteur_att(t_game *game);
void	kame_anim(t_game *game, int i);
// --------------------mouvement--------------------//

void	mouv_all(t_game *game, int keycode);
void	mouv_all_ssj(t_game *game, int keycode);
void	mouvement_right(t_game *game, int new_x, int new_y);
void	mouvement_left(t_game *game, int new_x, int new_y);
void	mouvement_top(t_game *game, int new_x, int new_y);
void	mouvement_bottom(t_game *game, int new_x, int new_y);
void	mouvement_right_ssj(t_game *game, int new_x, int new_y);
void	mouvement_left_ssj(t_game *game, int new_x, int new_y);
void	mouvement_top_ssj(t_game *game, int new_x, int new_y);
void	mouvement_bottom_ssj(t_game *game, int new_x, int new_y);
void	mouv_top_exit(t_game *game, int new_x, int new_y);
void	mouv_bottom_exit(t_game *game, int new_x, int new_y);
void	mouv_left_exit(t_game *game, int new_x, int new_y);
void	mouv_right_exit(t_game *game, int new_x, int new_y);
void	mouv_top_exit_ssj(t_game *game, int new_x, int new_y);
void	mouv_bottom_exit_ssj(t_game *game, int new_x, int new_y);
void	mouv_left_exit_ssj(t_game *game, int new_x, int new_y);
void	mouv_right_exit_ssj(t_game *game, int new_x, int new_y);
void	anim_t(t_game *game, int new_x, int new_y);
void	anim_b(t_game *game, int new_x, int new_y);
void	anim_r(t_game *game, int new_x, int new_y);
void	anim_l(t_game *game, int new_x, int new_y);
void	anim_t_ssj(t_game *game, int new_x, int new_y);
void	anim_b_ssj(t_game *game, int new_x, int new_y);
void	anim_r_ssj(t_game *game, int new_x, int new_y);
void	anim_l_ssj(t_game *game, int new_x, int new_y);
void	anim_super_end(t_game *game);
void	anim_super(t_game *game);
#endif