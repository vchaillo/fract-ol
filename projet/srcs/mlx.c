/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mlx.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vchaillo <vchaillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/15 19:31:37 by vchaillo          #+#    #+#             */
/*   Updated: 2015/02/18 18:45:27 by valentin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

int		expose_hook(t_env *e)
{
	mlx_put_image_to_window(e->mlx, e->win, e->img, 0, HEAD_H);
	mlx_put_image_to_window(e->mlx, e->win, e->img_head, 0, 0);
	put_menu_strings(e);
	put_head_strings(e);
	return (0);
}

int		key_hook(int keycode, t_env *e)
{
	if (keycode == 65307)
		exit (0);
	erase_image(e);
	ft_putnbr(keycode);
	ft_putchar('\n');
	return (0);
}

int		mouse_hook(int button, int x, int y, t_env *e)
{
	if (button == 1 && y < CASE_H && x > 0 && x < CASE_W)
	{
		if (e->menu == ON)
			e->menu = OFF;
		else
			e->menu = ON;
	}
	erase_image(e);
	return (0);
}

void	start_mlx(void)
{
	t_env	e;

	if (!(e.mlx = mlx_init()))
		exit (0);
	e.win = mlx_new_window(e.mlx, WIN_W, WIN_H, "fdf");
	e.img = mlx_new_image(e.mlx, WIN_W, IMG_H);
	e.img_head = mlx_new_image(e.mlx, WIN_W, HEAD_H);
	e.data = mlx_get_data_addr(e.img, &(e.bpp), &(e.size), &(e.endian));
	e.data_head = mlx_get_data_addr(e.img_head, &(e.bpp), &(e.size_head), &(e.endian));
	draw_header(&e);
	mlx_expose_hook(e.win, expose_hook, &e);
	mlx_mouse_hook(e.win, mouse_hook, &e);
	mlx_hook(e.win, 3, 3, key_hook, &e);
	mlx_loop(e.mlx);
}
