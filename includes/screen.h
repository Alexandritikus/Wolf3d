/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   screen.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oshudria <oshudria@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/30 14:24:22 by oshudria          #+#    #+#             */
/*   Updated: 2018/04/30 14:29:17 by oshudria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCREEN_H
# define SCREEN_H

# ifdef __APPLE__
# elif __linux__
#  include <SDL2/SDL.h>
# endif

typedef struct		s_screen
{
	SDL_Window		*m_window;
	SDL_Renderer	*m_renderer;
}					t_screen;

t_screen    *create_screen();
void        delete_screen(t_screen *screen);

#endif //SCREEN_H
