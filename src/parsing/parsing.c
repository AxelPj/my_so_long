#include "../../include/header/so_long.h"

void	parse_map(t_game *game)
{
	int		fd;
	int		size;
	int		i;

	i = 0;
	size = count_map(game);
	game->evr->map = malloc((size + 1) * sizeof(char *));
	fd = open_map(game);
	if (fd < 0)
	{
		free (game->evr->map);
		perror("Failed to open map");
		return ;
	}
	game->evr->map[i] = get_next_line(fd);
	while (game->evr->map[i] != NULL)
	{
		i++;
		game->evr->map[i] = get_next_line(fd);
	}
	game->evr->map[i] = NULL;
	close(fd);
}

char	**parse_mapff(t_game *game, char **mapcpy)
{
	int		fd;
	int		size;
	int		i;

	i = 0;
	size = count_map(game);
	mapcpy = malloc((size + 1) * sizeof(char *));
	fd = open_map(game);
	if (fd < 0)
	{
		free (mapcpy);
		perror("Failed to open map");
		return (NULL);
	}
	mapcpy[i] = get_next_line(fd);
	while (mapcpy[i] != NULL)
	{
		i++;
		mapcpy[i] = get_next_line(fd);
	}
	mapcpy[i] = NULL;
	close(fd);
	return (mapcpy);
}
