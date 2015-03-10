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
		"OTHER");
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
				"Reset r");
	}
}

void	put_color_strings(t_env *e)
{
	if (e->color_menu == ON)
	{
		mlx_string_put(e->mlx, e->win, CASE_W + (TEXT_W), TEXT_H * 5, WHITE, \
				"Red 1");
		mlx_string_put(e->mlx, e->win, CASE_W + (TEXT_W), TEXT_H * 8, WHITE, \
				"Green 2");
		mlx_string_put(e->mlx, e->win, CASE_W + (TEXT_W), TEXT_H * 11, WHITE, \
				"Blue 3");
		mlx_string_put(e->mlx, e->win, CASE_W + (TEXT_W), TEXT_H * 14, WHITE, \
				"Yellow 4");
		mlx_string_put(e->mlx, e->win, CASE_W + (TEXT_W), TEXT_H * 17, WHITE, \
				"Pink 5");
		mlx_string_put(e->mlx, e->win, CASE_W + (TEXT_W), TEXT_H * 20, WHITE, \
				"Orange 6");
		mlx_string_put(e->mlx, e->win, CASE_W + (TEXT_W), TEXT_H * 23, WHITE, \
				"Brown 7");
		mlx_string_put(e->mlx, e->win, CASE_W + (TEXT_W), TEXT_H * 26, WHITE, \
				"L_Blue 8");
		mlx_string_put(e->mlx, e->win, CASE_W + (TEXT_W), TEXT_H * 29, WHITE, \
				"D_Grey 9");
		mlx_string_put(e->mlx, e->win, CASE_W + (TEXT_W), TEXT_H * 32, WHITE, \
				"White 0");
	}
}
