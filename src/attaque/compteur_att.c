#include "../../include/header/so_long.h"

void	compteur_att(t_game *game)
{
	game->i++;
	game->anim = game->i / 20500;
	if (game->anim == 2)
		game->anim = 2;
}
