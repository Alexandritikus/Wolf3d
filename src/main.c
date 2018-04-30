/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oshudria <oshudria@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/26 20:37:51 by oshudria          #+#    #+#             */
/*   Updated: 2018/04/30 20:54:49 by oshudria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "wolf3d.h"

int	main(void)
{
	t_game	*wolf;

	if ((wolf = start_game()) == NULL)
	{
		ft_putendl("Fail to start the game");
		return (1);
	}
	game_process(wolf);
	end_game(wolf);
	return (0);
/*    bool w = true;
    while (w)
    {
        SDL_SetRenderDrawColor(screen->m_renderer, 255, 0, 0, 255);
        SDL_RenderClear(screen->m_renderer);
        SDL_RenderPresent(screen->m_renderer);

        SDL_Event event;
        while (SDL_PollEvent(&event))
        {
            if (event.type == SDL_QUIT)
            {
                w = false;
//                delete_screen(screen);
            }
        }
    }
    delete_screen(screen);
*/
}
