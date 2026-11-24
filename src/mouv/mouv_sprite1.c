#include "../../include/header/so_long.h"

void	mouv_all(t_game *game, int keycode)
{
	int	old_x;
	int	old_y;

	old_x = game->pos_player[0];
	old_y = game->pos_player[1];
	if ((keycode == 119 && game->evr->map[old_x - 1][old_y] == '0')
		|| (keycode == 119 && game->evr->map[old_x - 1][old_y] == 'C')
		|| (keycode == 119 && game->evr->map[old_x - 1][old_y] == 'E'))
		mouvement_top(game, old_x - 1, old_y);
	else if ((keycode == 115 && game->evr->map[old_x + 1][old_y] == '0')
		|| (keycode == 115 && game->evr->map[old_x + 1][old_y] == 'C')
		|| (keycode == 115 && game->evr->map[old_x + 1][old_y] == 'E'))
		mouvement_bottom(game, old_x + 1, old_y);
	else if ((keycode == 97 && game->evr->map[old_x][old_y - 1] == '0')
			|| (keycode == 97 && game->evr->map[old_x][old_y - 1] == 'C')
			|| (keycode == 97 && game->evr->map[old_x][old_y - 1] == 'E'))
		mouvement_left(game, old_x, old_y - 1);
	else if ((keycode == 100 && game->evr->map[old_x][old_y + 1] == '0')
		|| (keycode == 100 && game->evr->map[old_x][old_y + 1] == 'C')
		|| (keycode == 100 && game->evr->map[old_x][old_y + 1] == 'E'))
		mouvement_right(game, old_x, old_y + 1);
	find_start(game);
}

void	mouvement_top(t_game *game, int new_x, int new_y)
{
	if (game->evr->exit == 0)
	{
		if (game->evr->map[new_x][new_y] == 'C')
			game->evr->nb_c--;
		mouv_top_exit(game, new_x, new_y);
		game->evr->exit++;
	}
	if (game->evr->exit == 1)
	{
		if (game->evr->map[new_x][new_y] == 'E')
		{
			if (game->evr->nb_c == 0)
				end_game(game);
			game->evr->exit--;
		}
		else if (game->evr->map[new_x][new_y] == 'C')
			game->evr->nb_c--;
		anim_t(game, new_x, new_y);
	}
	game->anim = 0;
	game->dir = 't';
	game->deplacement++;
}

void	mouvement_bottom(t_game *game, int new_x, int new_y)
{
	if (game->evr->exit == 0)
	{
		if (game->evr->map[new_x][new_y] == 'C')
			game->evr->nb_c--;
		mouv_bottom_exit(game, new_x, new_y);
		game->evr->exit++;
	}
	if (game->evr->exit == 1)
	{
		if (game->evr->map[new_x][new_y] == 'E')
		{
			if (game->evr->nb_c == 0)
				end_game(game);
			game->evr->exit--;
		}
		else if (game->evr->map[new_x][new_y] == 'C')
			game->evr->nb_c--;
		anim_b(game, new_x, new_y);
	}
	game->anim = 0;
	game->dir = 'b';
	game->deplacement++;
}

void	mouvement_right(t_game *game, int new_x, int new_y)
{
	if (game->evr->exit == 0)
	{
		if (game->evr->map[new_x][new_y] == 'C')
			game->evr->nb_c--;
		mouv_right_exit(game, new_x, new_y);
		game->evr->exit++;
	}
	if (game->evr->exit == 1)
	{
		if (game->evr->map[new_x][new_y] == 'E')
		{
			if (game->evr->nb_c == 0)
				end_game(game);
			game->evr->exit--;
		}
		else if (game->evr->map[new_x][new_y] == 'C')
			game->evr->nb_c--;
		anim_r(game, new_x, new_y);
	}
	game->anim = 0;
	game->dir = 'r';
	game->deplacement++;
}

void	mouvement_left(t_game *game, int new_x, int new_y)
{
	if (game->evr->exit == 0)
	{
		if (game->evr->map[new_x][new_y] == 'C')
			game->evr->nb_c--;
		mouv_left_exit(game, new_x, new_y);
		game->evr->exit++;
	}
	if (game->evr->exit == 1)
	{
		if (game->evr->map[new_x][new_y] == 'E')
		{
			if (game->evr->nb_c == 0)
				end_game(game);
			game->evr->exit--;
		}
		else if (game->evr->map[new_x][new_y] == 'C')
			game->evr->nb_c--;
		anim_l(game, new_x, new_y);
	}
	game->anim = 0;
	game->dir = 'l';
	game->deplacement++;
}
