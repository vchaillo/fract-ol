/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vchaillo <vchaillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/15 19:22:44 by vchaillo          #+#    #+#             */
/*   Updated: 2015/03/06 19:29:51 by vchaillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

int		main(int argc, char **argv)
{
	t_env	e;

	if (argc == 2)
	{
		if (ft_strcmp(argv[1], "mandel") == 0)
			e.arg = MANDEL;
		else if (ft_strcmp(argv[1], "julia") == 0)
			e.arg = JULIA;
		else if (ft_strcmp(argv[1], "other") == 0)
			e.arg = OTHER;
		else
		{
			ft_putendl("Usage : ./fractol [mandel] [julia] [other]");
			return (0);
		}
		start_mlx(&e);
	}
	else
		ft_putendl("Usage : ./fractol [mandel] [julia] [other]");
	return (0);
}
