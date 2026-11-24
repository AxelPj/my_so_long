#include "../../include/header/so_long.h"

void	destroy_sprite4(t_game *game, int i, int j)
{
	while (i < 4)
	{
		j = 0;
		while (j < 3)
		{
			if (game->asset->attack_ssj[i][j])
				mlx_destroy_image(game->evr->mlx,
					game->asset->attack_ssj[i][j]);
			j++;
		}
		free(game->asset->attack_ssj[i]);
		i++;
	}
	free(game->asset->attack_ssj);
}

void	destroy_sprite5(t_game *game, int i, int j)
{
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			if (game->asset->attack[i][j])
				mlx_destroy_image(game->evr->mlx,
					game->asset->attack[i][j]);
			j++;
		}
		free(game->asset->attack[i]);
		i++;
	}
	free(game->asset->attack);
}
