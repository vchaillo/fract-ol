/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mouse_hook.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vchaillo <vchaillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/22 01:58:13 by vchaillo          #+#    #+#             */
/*   Updated: 2015/03/22 06:21:47 by vchaillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

void	color_mouse_hook(t_env *e, int y)
{
	if (y < (TEXT_H) * 8)
		e->color = RED;
	else if (y < (TEXT_H) * 11)
		e->color = GREEN;
	else if (y < (TEXT_H) * 14)
		e->color = BLUE;
	else if (y < (TEXT_H) * 17)
		e->color = YELLOW;
	else if (y < (TEXT_H) * 20)
		e->color = PINK;
	else if (y < (TEXT_H) * 23)
		e->color = ORANGE;
	else if (y < (TEXT_H) * 26)
		e->color = BROWN;
	else if (y < (TEXT_H) * 29)
		e->color = LIGHT_BLUE;
	else if (y < (TEXT_H) * 32)
		e->color = DARK_GREY;
	else if (y < (TEXT_H) * 35)
		e->color = WHITE;
}

void	menu_mouse_hook(t_env *e, int y)
{
	if (y < (TEXT_H) * 8)
		e->zoom += 0.3;
	else if (y < (TEXT_H) * 11)
		e->zoom -= 0.3;
	else if (y < (TEXT_H) * 14)
		e->iter += 10;
	else if (y < (TEXT_H) * 17)
		e->color -= 10;
	else if (y < (TEXT_H) * 20)
		init_all(e);
}

void	fractal_mouse_hook(t_env *e, int x)
{
	if (x < (CASE_W) * 3)
		e->arg = MANDEL;
	else if (x < (CASE_W) * 4)
		e->arg = JULIA;
	else
		e->arg = OTHER;
	init_all(e);
}

void	zoom_mouse_hook(t_env *e, int button)
{
	if (button == 4)
		e->zoom *= 0.9;
	else if (button == 5)
		e->zoom /= 0.9;
}
