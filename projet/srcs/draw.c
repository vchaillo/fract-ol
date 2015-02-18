/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vchaillo <vchaillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/17 02:20:44 by valentin          #+#    #+#             */
/*   Updated: 2015/02/18 18:43:42 by valentin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

void	erase_image(t_env *e)
{
	mlx_destroy_image(e->mlx, e->img);
	e->img = mlx_new_image(e->mlx, WIN_W, IMG_H);
	e->data = mlx_get_data_addr(e->img, &(e->bpp), &(e->size), &(e->endian));
	if (e->menu == ON)
		draw_menu(e);
	mlx_put_image_to_window(e->mlx, e->win, e->img, 0, HEAD_H);
	put_menu_strings(e);
}

void	fill_pixel(t_env *e, int color, int x, int y)
{
	int		i;

	i = x * 4 + y * e->size;
	e->data[i] = color % 256;
	color /= 256;
	e->data[i + 1] = color % 256;
	color /= 256;
	e->data[i + 2] = color % 256;
}
