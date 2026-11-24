/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   compteur_att.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axelpeti <axelpeti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 19:23:43 by axelpeti          #+#    #+#             */
/*   Updated: 2025/02/27 16:55:17 by axelpeti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/header/so_long.h"

void	compteur_att(t_game *game)
{
	game->i++;
	game->anim = game->i / 20500;
	if (game->anim == 2)
		game->anim = 2;
}
