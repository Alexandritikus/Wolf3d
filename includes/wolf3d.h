/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wolf3d.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oshudria <oshudria@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/26 18:50:26 by oshudria          #+#    #+#             */
/*   Updated: 2018/04/30 21:04:36 by oshudria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WOLF3D_H
# define WOLF3D_H

# include "screen.h"
# include "libft.h"

# ifdef	__APPLE__
# elif __linux__
#  include <SDL2/SDL.h>
# endif

# define WIDTH	800
# define HEIGHT	800
# define NAME	"Wolf3D"

typedef struct	s_game
{
	t_screen	*screen;
	char		**map;
	char		end_of_game;
}				t_game;

t_game	*start_game(void);
void	end_game(t_game *game);
void	game_process(t_game *wolf);

char	**parce_map(char *name);

#endif
