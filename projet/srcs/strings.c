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
		"COLORS");
	mlx_string_put(e->mlx, e->win, (CASE_W * 2) + TEXT_W, TEXT_H, WHITE, \
		"MANDEL");
	mlx_string_put(e->mlx, e->win, (CASE_W * 3) + TEXT_W, TEXT_H, WHITE, \
		"JULIA");
	mlx_string_put(e->mlx, e->win, (CASE_W * 4) + TEXT_W, TEXT_H, WHITE, \
		"KOSH");
	mlx_string_put(e->mlx, e->win, TEXT_W, TEXT_H, ORANGE, \
		"COMMANDS");
}

void	put_menu_strings(t_env *e)
{
	if (e->menu == ON)
	{
		mlx_string_put(e->mlx, e->win, (TEXT_W), 45, ORANGE, \
				"ZOOM +");
		mlx_string_put(e->mlx, e->win, (TEXT_W), 65, ORANGE, \
				"ZOOM -");
		mlx_string_put(e->mlx, e->win, (TEXT_W), 85, ORANGE, \
				"BLUE 3");
		mlx_string_put(e->mlx, e->win, (TEXT_W), 105, ORANGE, \
				"GREEN 2");
		mlx_string_put(e->mlx, e->win, (TEXT_W), 125, ORANGE, \
				"RED 1");
		mlx_string_put(e->mlx, e->win, (TEXT_W), 145, ORANGE, \
				"YELLOW 4");
	}
}
