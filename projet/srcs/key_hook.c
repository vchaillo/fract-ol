#include "fractol.h"

void	move_key_hook(t_env *e, int keycode)
{
	if (keycode == 65361 || keycode == 123)
		e->move_lr -= 0.02;
	if (keycode == 65363 || keycode == 124)
		e->move_lr += 0.02;
	if (keycode == 65362 || keycode == 126)
		e->move_ud -= 0.02;
	if (keycode == 65364 || keycode == 125)
		e->move_ud += 0.02;
}

void	zoom_key_hook(t_env *e, int keycode)
{
	if (keycode == 45 || keycode == 27)
		e->zoom -= 0.3;
	if (keycode == 61 || keycode == 24)
		e->zoom += 0.3;
}

void	iter_key_hook(t_env *e, int keycode)
{
	if (keycode == 43)
		e->iter -= 10;
	if (keycode == 47)
		e->iter += 10;
}

void	color_key_hook(t_env *e, int keycode)
{
	if (keycode == 18)
		e->color = RED;
	if (keycode == 19)
		e->color = GREEN;
	if (keycode == 20)
		e->color = BLUE;
	if (keycode == 21)
		e->color = YELLOW;
	if (keycode == 22)
		e->color = PINK;
	if (keycode == 23)
		e->color = ORANGE;
	if (keycode == 26)
		e->color = BROWN;
	if (keycode == 28)
		e->color = LIGHT_BLUE;
	if (keycode == 25)
		e->color = DARK_GREY;
	if (keycode == 29)
		e->color = WHITE;
}
