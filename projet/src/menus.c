/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   menus.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vchaillo <vchaillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/12 06:54:32 by vchaillo          #+#    #+#             */
/*   Updated: 2015/03/06 19:21:53 by vchaillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

void	draw_menu(t_env *e)
{
	int		x;
	int		y;

	y = -1;
	while (++y < CASE_H * 4)
	{
		x = 0;
		while (++x < CASE_W)
			fill_pixel(e, DARK_GREY, x, y);
	}
}

void	draw_color_menu(t_env *e)
{
	int		x;
	int		y;

	y = -1;
	while (++y < CASE_H * 7)
	{
		x = CASE_W;
		while (++x < CASE_W * 2)
			fill_pixel(e, DARK_GREY, x, y);
	}
}

void	draw_header(t_env *e)
{
	int		x;
	int		y;

	y = 1;
	while (y < HEAD_H)
	{
		x = 1;
		while (x < WIN_W)
		{
			if (!(x % CASE_W))
				fill_head_pixel(e, BLACK, x, y);
			else
				fill_head_pixel(e, DARK_GREY, x, y);
			x++;
		}
		y++;
	}
}

void	fill_head_pixel(t_env *e, int color, int x, int y)
{
	int		i;

	i = x * 4 + y * e->size_head;
	e->data_head[i] = color % 256;
	color /= 256;
	e->data_head[i + 1] = color % 256;
	color /= 256;
	e->data_head[i + 2] = color % 256;
}
