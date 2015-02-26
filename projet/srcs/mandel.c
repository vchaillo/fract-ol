/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mandel.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vchaillo <vchaillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/25 15:49:07 by vchaillo          #+#    #+#             */
/*   Updated: 2015/02/26 19:04:55 by vchaillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

void	draw_mandel(t_env *e)
{
	t_complx	p;
	int			color;
	int			x;
	int			y;

	init_mandel(&p, e);
	x = 0;
	while (x < WIN_W)
	{
		y = 0;
		while (y < WIN_H)
		{
			p.r = 1 * (x - WIN_W / 2) / (0.5 * p.zoom * WIN_W);
			p.i = (y - WIN_W / 2) / (0.5 * p.zoom * WIN_W);
			color = (e->color * (mandel_color(&p) * 1000));
			fill_pixel(e, color, x, y);
			y++;
		}
		x++;
	}
}

int		mandel_color(t_complx *p)
{
	t_complx	old;
	t_complx	new;
	int			i;

	i = 0;
	new.r = 0;
	new.i = 0;
	while (i < p->iter)
	{
		old.r = new.r;
		old.i = new.i;
		new.r = old.r * old.r - old.i * old.i + p->r;
		new.i = 2 * old.r * old.i + p->i;
		if (new.r * new.r + new.i * new.i > 4)
			break;
		i++;
	}
	if (i == p->iter)
		return (0);
	else
		return (i);
}

void	init_mandel(t_complx *p, t_env *e)
{
	e->color = 0x0000FF;
	p->iter = 50;
	p->zoom = 0.5;
}
