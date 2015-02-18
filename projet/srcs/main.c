/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vchaillo <vchaillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/15 19:22:44 by vchaillo          #+#    #+#             */
/*   Updated: 2015/02/18 18:49:03 by valentin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

int		main(int argc, char **argv)
{
	(void)argv;
	if (argc == 2)
	{
		start_mlx();
	}
	else
		ft_putendl("Tell me what you want!");
	return (0);
}
