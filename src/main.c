/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oshudria <oshudria@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/26 20:37:51 by oshudria          #+#    #+#             */
/*   Updated: 2017/12/01 21:53:00 by oshudria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "screen.h"

int	main(void)
{
    t_screen *screen;

    if ((screen = create_screen()) == NULL)
        return 1;

    int i = 1000000000;
    while (--i > 0);
    delete_screen(screen);

	return (0);
}
