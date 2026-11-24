/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axelpeti <axelpeti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 16:03:09 by axelpeti          #+#    #+#             */
/*   Updated: 2025/03/17 16:29:16 by axelpeti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/header/so_long.h"

int	is_ber_file(const char *path)
{
	const char	*dot;
	int			fd;
	char		*line;

	dot = ft_strrchr(path, '.');
	if (dot && ft_strcmp(dot, ".ber") == 0)
	{
		fd = open(path, O_RDONLY);
		if (fd == -1)
		{
			perror ("map does not exist\n");
			return (1);
		}
		line = get_next_line(fd);
		if (line == NULL)
		{
			close(fd);
			perror ("map empty\n");
			return (1);
		}
	}
	else
		return (1);
	return (free(line), close(fd), 0);
}

void	start_game(char *map)
{
	t_game	game;

	game.evr = NULL;
	game.asset = NULL;
	init_struct(&game, map);
	if (verif_all(&game) == 0)
	{
		change_wall(&game);
		open_windows(&game);
	}
	else
	{
		ft_putstr_fd("Error\ninvalid map\n", 2);
		free_error(&game);
	}
}

int	main(int argc, char **argv)
{
	t_intro	intro;

	if (argc == 2)
	{
		if (is_ber_file(argv[1]) != 0)
		{
			ft_putstr_fd("Error\nthe map must be a readable .ber file\n", 2);
			exit(EXIT_FAILURE);
		}
		ini_intro(&intro, argv[1]);
		open_intro(&intro);
	}
	else
	{
		perror ("va prendre un cafe et donne moi le bon parametre\n");
		exit(EXIT_FAILURE);
	}
}
