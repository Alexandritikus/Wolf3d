/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   screen.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oshudria <oshudria@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/30 16:20:04 by oshudria          #+#    #+#             */
/*   Updated: 2018/04/30 16:20:26 by oshudria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "screen.h"

t_screen *create_screen()
{
    t_screen *screen;

    if (SDL_Init(SDL_INIT_VIDEO) < 0)
        return NULL;
    screen = (t_screen*)malloc(sizeof(t_screen));
    screen->m_window = SDL_CreateWindow("SDL Basic", SDL_WINDOWPOS_UNDEFINED,
                                        SDL_WINDOWPOS_UNDEFINED, 800, 800,
                                        SDL_WINDOW_SHOWN);
    screen->m_renderer = SDL_CreateRenderer(screen->m_window, -1,
                                            SDL_RENDERER_PRESENTVSYNC);
    return (screen);
}

void delete_screen(t_screen *screen)
{
    SDL_DestroyRenderer(screen->m_renderer);
    SDL_DestroyWindow(screen->m_window);
    SDL_Quit();
}
