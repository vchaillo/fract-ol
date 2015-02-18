/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fractol.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vchaillo <vchaillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/15 19:24:48 by vchaillo          #+#    #+#             */
/*   Updated: 2015/02/18 18:46:12 by valentin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRACTOL_H
# define FRACTOL_H

# include <mlx.h>
# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>
# include <sys/types.h>
# include <sys/stat.h>
# include "../libft/includes/libft.h"

# define WIN_W 1920
# define WIN_H 1080
# define HEAD_H (WIN_H / 20)
# define IMG_H (WIN_H - HEAD_H)

# define CASE_H (WIN_H / 20)
# define CASE_W (WIN_W / 10)
# define TEXT_H (CASE_H / 8) * 5
# define TEXT_W (CASE_W / 10) * 3

# define STD 0
# define BLUE_MODE 1
# define RED_MODE 2
# define GREEN_MODE 3

# define OFF 0
# define ON 1

# define WHITE 0xFFFFFF
# define BLACK 0x000000
# define LIGHT_GREY 0x707070
# define DARK_GREY 0x202020
# define GREEN 0x00FF00
# define GRASS_GREEN 0x669933
# define BLUE 0x0000FF
# define SEA_BLUE 0x0066FF
# define LIGHT_BLUE 0x00CCFF
# define YELLOW 0xFFFF00
# define RED 0xFF0000
# define MARS_RED 0x8F1B00
# define PINK 0xFF00FF
# define ORANGE 0xFF9900
# define MARS_ORANGE 0xAF3B00
# define BROWN 0x663300

typedef struct			s_env
{
	void			*mlx;
	void			*win;
	void			*img;
	void			*img_head;
	char			*data;
	char			*data_head;
	int			size;
	int			size_head;
	int			endian;
	int			bpp;
	int			color_mode;
	int			menu;
}				t_env;

void				start_mlx(void);
int				expose_hook(t_env *e);
int				key_hook(int keycode, t_env *e);
int				mouse_hook(int button, int x, int y, t_env *e);
void				open_error(t_env *e);
void				malloc_error(void);
void				draw_menu(t_env *e);
void				draw_header(t_env *e);
void				fill_pixel(t_env *e, int color, int x, int y);
void				fill_head_pixel(t_env *e, int color, int x, int y);
void				erase_image(t_env *e);
void				put_head_strings(t_env *e);
void				put_menu_strings(t_env *e);
void				put_strings_1(t_env *e);
void				put_strings_2(t_env *e);

#endif
