/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_msg.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vchaillo <vchaillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/17 02:52:24 by valentin          #+#    #+#             */
/*   Updated: 2015/03/22 01:46:06 by vchaillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

void	open_error(t_env *e)
{
	(void)e;
	ft_putendl("Failed to open the file");
	exit(0);
}

void	malloc_error(void)
{
	ft_putendl("Memory allocation error");
	exit(0);
}
