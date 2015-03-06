/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strings.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vchaillo <vchaillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/15 18:29:38 by vchaillo          #+#    #+#             */
/*   Updated: 2015/03/06 19:22:39 by vchaillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

void	put_head_strings(t_env *e)
{
	mlx_string_put(e->mlx, e->win, (CASE_W * 1) + 10 + TEXT_W, TEXT_H, WHITE, \
		"COLORS");
	mlx_string_put(e->mlx, e->win, (CASE_W * 2) + 10 +TEXT_W, TEXT_H, WHITE, \
		"MANDEL");
	mlx_string_put(e->mlx, e->win, (CASE_W * 3) + 10 + TEXT_W, TEXT_H, WHITE, \
		"JULIA");
	mlx_string_put(e->mlx, e->win, (CASE_W * 4) + 10 + TEXT_W, TEXT_H, WHITE, \
		"KOSH");
	mlx_string_put(e->mlx, e->win, TEXT_W + 10, TEXT_H, ORANGE, \
		"COMMANDS");
}

void	put_menu_strings(t_env *e)
{
	if (e->menu == ON)
	{
		mlx_string_put(e->mlx, e->win, (TEXT_W), TEXT_H * 5, ORANGE, \
				"Zoom +");
		mlx_string_put(e->mlx, e->win, (TEXT_W), TEXT_H * 8, ORANGE, \
				"Zoom -");
		mlx_string_put(e->mlx, e->win, (TEXT_W), TEXT_H * 11, ORANGE, \
				"Iter >");
		mlx_string_put(e->mlx, e->win, (TEXT_W), TEXT_H * 14, ORANGE, \
				"Iter <");
		mlx_string_put(e->mlx, e->win, (TEXT_W), TEXT_H * 17, ORANGE, \
				"Move array");
	}
}

void	put_color_strings(t_env *e)
{
	if (e->color_menu == ON)
	{
		mlx_string_put(e->mlx, e->win, CASE_W + (TEXT_W), TEXT_H * 5, ORANGE, \
				"RED 1");
		mlx_string_put(e->mlx, e->win, CASE_W + (TEXT_W), TEXT_H * 8, ORANGE, \
				"GREEN 2");
		mlx_string_put(e->mlx, e->win, CASE_W + (TEXT_W), TEXT_H * 11, ORANGE, \
				"BLUE 3");
		mlx_string_put(e->mlx, e->win, CASE_W + (TEXT_W), TEXT_H * 14, ORANGE, \
				"YELLOW 4");
		mlx_string_put(e->mlx, e->win, CASE_W + (TEXT_W), TEXT_H * 17, ORANGE, \
				"PINK 5");
		mlx_string_put(e->mlx, e->win, CASE_W + (TEXT_W), TEXT_H * 20, ORANGE, \
				"ORANGE 6");
		mlx_string_put(e->mlx, e->win, CASE_W + (TEXT_W), TEXT_H * 23, ORANGE, \
				"BROWN 7");
		mlx_string_put(e->mlx, e->win, CASE_W + (TEXT_W), TEXT_H * 26, ORANGE, \
				"L_BLUE 8");
		mlx_string_put(e->mlx, e->win, CASE_W + (TEXT_W), TEXT_H * 29, ORANGE, \
				"D_GREY 9");
		mlx_string_put(e->mlx, e->win, CASE_W + (TEXT_W), TEXT_H * 32, ORANGE, \
				"WHITE 0");
	}
}
