/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mlx.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vchaillo <vchaillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/15 19:31:37 by vchaillo          #+#    #+#             */
/*   Updated: 2015/03/22 06:28:31 by vchaillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

int		expose_hook(t_env *e)
{
	mlx_put_image_to_window(e->mlx, e->win, e->img, 0, HEAD_H);
	mlx_put_image_to_window(e->mlx, e->win, e->img_head, 0, 0);
	put_head_strings(e);
	put_menu_strings(e);
	put_color_strings(e);
	return (0);
}

int		key_hook(int keycode, t_env *e)
{
	if (keycode == 65307 || keycode == 53)
		exit (0);
	if (keycode == 15)
		init_all(e);
	move_key_hook(e, keycode);
	zoom_key_hook(e, keycode);
	color_key_hook(e, keycode);
	iter_key_hook(e, keycode);
	erase_image(e);
	ft_putnbr(keycode);
	ft_putchar('\n');
	return (0);
}

int		mouse_hook(int button, int x, int y, t_env *e)
{
	if (button == 1 && y > 0 && y < CASE_H && x < CASE_W)
	{
		if (e->menu == ON)
			e->menu = OFF;
		else
			e->menu = ON;
	}
	if (button == 1 && y > 0 && y < CASE_H && x > CASE_W && x < (CASE_W * 2))
	{
		if (e->color_menu == ON)
			e->color_menu = OFF;
		else
			e->color_menu = ON;
	}
	if (button == 1 && y > 0 && y > CASE_H && x < CASE_W && e->menu == ON)
		menu_mouse_hook(e, y);
	if (button == 1 && y > 0 && y < CASE_H && x > (CASE_W * 2))
		fractal_mouse_hook(e, x);
	if (button == 1 && y > CASE_H && x > CASE_W && x < (CASE_W * 2) &&
		e->color_menu == ON)
		color_mouse_hook(e, y);
	if (button == 5 || button == 4)
		zoom_mouse_hook(e, button);
	erase_image(e);
	return (0);
}

int		julia_mouse_hook(int x, int y, t_env *e)
{
	if (x > 0 && x < WIN_W && y > HEAD_H && y < WIN_H && e->arg == JULIA)
	{
		if (x > e->julia_x)
			e->ju.rc += 0.005 / e->zoom;
		else
			e->ju.rc -= 0.005 / e->zoom;
		if (y > e->julia_y)
			e->ju.ic += 0.005 / e->zoom;
		else
			e->ju.ic -= 0.005 / e->zoom;
		e->julia_x = x;
		e->julia_y = y;
	}
	erase_image(e);
	return (0);
}

void	start_mlx(t_env *e)
{
	if (!(e->mlx = mlx_init()))
		exit (0);
	e->win = mlx_new_window(e->mlx, WIN_W, WIN_H, "fractol");
	e->img = mlx_new_image(e->mlx, WIN_W, IMG_H);
	e->img_head = mlx_new_image(e->mlx, WIN_W, HEAD_H);
	e->data = mlx_get_data_addr(e->img, &(e->bpp), &(e->size), &(e->endian));
	e->data_head = mlx_get_data_addr(e->img_head, &(e->bpp), &(e->size_head),
		&(e->endian));
	ft_putnbr(e->bpp);
	draw_header(e);
	e->menu = OFF;
	e->color_menu = OFF;
	init_all(e);
	draw_all(e);
	mlx_expose_hook(e->win, expose_hook, e);
	mlx_mouse_hook(e->win, mouse_hook, e);
	mlx_hook(e->win, 3, 3, key_hook, e);
	mlx_hook(e->win, 6, 6, julia_mouse_hook, e);
	mlx_loop(e->mlx);
}
