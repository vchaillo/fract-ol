/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strings.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vchaillo <vchaillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/15 18:29:38 by vchaillo          #+#    #+#             */
/*   Updated: 2015/02/25 18:45:50 by vchaillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

void	put_head_strings(t_env *e)
{
	mlx_string_put(e->mlx, e->win, (CASE_W * 1) + TEXT_W, TEXT_H, WHITE, \
			" COLOR_SET_1");
	mlx_string_put(e->mlx, e->win, (CASE_W * 2) + TEXT_W, TEXT_H, WHITE, \
			" COLOR_SET_2");
	mlx_string_put(e->mlx, e->win, (CASE_W * 3) + TEXT_W, TEXT_H, WHITE, \
			" COLOR_SET_3");
	mlx_string_put(e->mlx, e->win, (CASE_W * 4) + TEXT_W, TEXT_H, WHITE, \
			" COLOR_SET_4");
	mlx_string_put(e->mlx, e->win, (CASE_W * 5) + TEXT_W, TEXT_H, WHITE, \
			"ZOOM_IN");
	mlx_string_put(e->mlx, e->win, (CASE_W * 6) + TEXT_W, TEXT_H, WHITE, \
			"ZOOM_OUT");
	mlx_string_put(e->mlx, e->win, (CASE_W * 7) + TEXT_W, TEXT_H, WHITE, \
			"MANDELBROT");
	mlx_string_put(e->mlx, e->win, (CASE_W * 8) + TEXT_W, TEXT_H, WHITE, \
			"JULIA");
	mlx_string_put(e->mlx, e->win, (CASE_W * 9) + TEXT_W, TEXT_H, WHITE, \
			"OTHER");
}

void	put_menu_strings(t_env *e)
{
	if (e->menu == ON)
	{
		mlx_string_put(e->mlx, e->win, TEXT_W, TEXT_H, DARK_GREY, \
			"SHOW COMMANDS");
		mlx_string_put(e->mlx, e->win, TEXT_W, TEXT_H, ORANGE, \
			"HIDE COMMANDS");
	}
	else
	{
		mlx_string_put(e->mlx, e->win, TEXT_W, TEXT_H, DARK_GREY, \
			"HIDE COMMANDS");
		mlx_string_put(e->mlx, e->win, TEXT_W, TEXT_H, ORANGE, \
			"SHOW COMMANDS");
	}
	if (e->menu == ON)
	{
		put_strings_1(e);
//		put_strings_2(e);
	}
}

void	put_strings_1(t_env *e)
{
		mlx_string_put(e->mlx, e->win, (TEXT_W / 2), (TEXT_H * 3), ORANGE, \
				"Zoom + : num+");
		mlx_string_put(e->mlx, e->win, (TEXT_W / 2), (TEXT_H * 4), ORANGE, \
				"Zoom - : num-");
		mlx_string_put(e->mlx, e->win, (TEXT_W / 2), (TEXT_H * 5), ORANGE, \
				"color_set_1 : 1");
		mlx_string_put(e->mlx, e->win, (TEXT_W / 2), (TEXT_H * 6), ORANGE, \
				"color_set_2 : 2");
		mlx_string_put(e->mlx, e->win, (TEXT_W / 2), (TEXT_H * 7), ORANGE, \
				"color_set_3 : 3");
		mlx_string_put(e->mlx, e->win, (TEXT_W / 2), (TEXT_H * 8), ORANGE, \
				"color_set_4 : 4");
		mlx_string_put(e->mlx, e->win, (TEXT_W / 2), (TEXT_H * 9), ORANGE, \
				"-------------");
}
/*
void	put_strings_2(t_env *e)
{
		mlx_string_put(e->mlx, e->win, (TEXT_W / 2), (TEXT_H * 10), ORANGE, \
				"-------------");
		mlx_string_put(e->mlx, e->win, (TEXT_W / 2), (TEXT_H * 11), ORANGE, \
				"-------------");
		mlx_string_put(e->mlx, e->win, (TEXT_W / 2), (TEXT_H * 12), ORANGE, \
				"-------------");
		mlx_string_put(e->mlx, e->win, (TEXT_W / 2), (TEXT_H * 13), ORANGE, \
				"-------------");
		mlx_string_put(e->mlx, e->win, (TEXT_W / 2), (TEXT_H * 14), ORANGE, \
				"-------------");
		mlx_string_put(e->mlx, e->win, (TEXT_W / 2), (TEXT_H * 15), ORANGE, \
				"-------------");
}*/