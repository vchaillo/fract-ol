/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   julia.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vchaillo <vchaillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/06 19:30:04 by vchaillo          #+#    #+#             */
/*   Updated: 2015/03/20 03:18:15 by vchaillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

static int	julia_color(t_complx *new, t_env *e)
{
	t_complx	old;
	int			i;

	i = 0;
	while (i < e->iter)
	{
		old.r = new->r;
		old.i = new->i;
		new->r = old.r * old.r - old.i * old.i + e->ju.rc;
		new->i = 2 * old.r * old.i + e->ju.ic;
		if ((new->r * new->r + new->i * new->i) > 4)
			break ;
		i++;
	}
	return (i);
}

void		draw_julia(t_env *e)
{
	t_complx	p;
	int			color;
	int			x;
	int			y;

	x = 0;
	while (x < WIN_W)
	{
		y = 0;
		while (y < IMG_H)
		{
			p.r = 1.5 * (x - WIN_W / 2) / (0.5 * e->zoom * WIN_W) + e->move_lr;
			p.i = (y - WIN_W / 2) / (0.5 * e->zoom * WIN_W) + e->move_ud;
			color = (e->color * (julia_color(&p, e) * 500));
			fill_pixel(e, color, x, y);
			y++;
		}
		x++;
	}
}
