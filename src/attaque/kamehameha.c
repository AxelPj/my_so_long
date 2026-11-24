#include "../../include/header/so_long.h"

void	kamehameha(t_game *game)
{
	int	x;
	int	y;

	x = game->pos_player[0];
	y = game->pos_player[1];
	if ((game->dir == 'b' && game->evr->map[x + 1][y] == '0')
		|| (game->dir == 'b' && game->evr->map[x + 1][y] == 'H'))
		kamehameha_anim(game, 0);
	else if ((game->dir == 't' && game->evr->map[x - 1][y] == '0')
		|| (game->dir == 't' && game->evr->map[x - 1][y] == 'H'))
		kamehameha_anim(game, 1);
	else if ((game->dir == 'r' && game->evr->map[x][y + 1] == '0')
		|| (game->dir == 'r' && game->evr->map[x][y + 1] == 'H'))
		kamehameha_anim(game, 2);
	else if ((game->dir == 'l' && game->evr->map[x][y - 1] == '0')
		|| (game->dir == 'l' && game->evr->map[x][y - 1] == 'H'))
		kamehameha_anim(game, 3);
}

void	kamehameha_anim(t_game *game, int i)
{
	game->i = 0;
	while (game->anim < 3)
	{
		compteur_att(game);
		if (game->anim >= 0 && game->anim <= 1)
			mlx_put_image_to_window(game->evr->mlx, game->evr->mlx_win,
				game->asset->attack_ssj[i][game->anim],
				game->pos_player[1] * 64, game->pos_player[0] * 64);
		if (game->anim == 2)
			mlx_put_image_to_window(game->evr->mlx, game->evr->mlx_win,
				game->asset->attack_ssj[i][2], game->pos_player[1] * 64,
				game->pos_player[0] * 64);
	}
	kame_anim(game, i);
	mlx_put_image_to_window(game->evr->mlx, game->evr->mlx_win,
		game->asset->sprite_ssj[i][4], game->pos_player[1] * 64,
		game->pos_player[0] * 64);
	game->anim = 0;
}
