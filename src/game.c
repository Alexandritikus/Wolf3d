/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   game.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oshudria <oshudria@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/30 18:59:27 by oshudria          #+#    #+#             */
/*   Updated: 2018/04/30 21:15:41 by oshudria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "wolf3d.h"

static t_game	*init_game(void)
{
	t_game *game;

	game = (t_game*)malloc(sizeof(t_game));
	game->screen = NULL;
	game->map = NULL;
	game->end_of_game = 'w';
	return game;
}

t_game	*start_game(void)
{
	t_game	*game;

	game = init_game();
	if ((game->map = parce_map("lvl01.w3d")) == NULL)
	{
		end_game(game);
		return NULL;
	}
	if ((game->screen = create_screen(WIDTH, HEIGHT, NAME)) == NULL)
	{
		end_game(game);
		return NULL;
	}
	return game;
}

void	end_game(t_game *game)
{
	if (game->screen)
		delete_screen(game->screen);
	if (game->map)
		ft_tabdel(&game->map);
	free(game);
}

void	game_process(t_game *wolf)
{
	while (!wolf->end_of_game)
	{
		//TODO: implement game process
	}
}
