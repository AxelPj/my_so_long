/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_map.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axelpeti <axelpeti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 16:34:14 by axelpeti          #+#    #+#             */
/*   Updated: 2025/03/11 16:59:46 by axelpeti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/header/so_long.h"
#include <sys/stat.h>

int	open_map(t_game *game)
{
	int	fd;

	fd = open(game->evr->path_map, O_RDONLY);
	if (fd == -1)
	{
		free (game->evr->map);
		perror ("map invalide");
	}
	return (fd);
}

int	open_verif(char	*path)
{
	int	fd;

	fd = open(path, O_RDONLY);
	if (fd == -1)
	{
		perror ("map invalide");
		return (1);
	}
	close(fd);
	return (0);
}

int	count_map(t_game *game)
{
	int		fd;
	int		size;
	char	*line;

	size = 0;
	fd = open(game->evr->path_map, O_RDONLY);
	if (fd < 0)
	{
		perror("Error opening map file");
		return (-1);
	}
	line = get_next_line(fd);
	while (line != NULL)
	{
		free(line);
		size++;
		line = get_next_line(fd);
	}
	close (fd);
	return (size);
}

void	free_map(char **map)
{
	int	i;

	i = 0;
	while (map[i])
	{
		free (map[i]);
		i++;
	}
	free (map);
}
