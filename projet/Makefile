# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vchaillo <vchaillo@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/01/27 19:25:58 by vchaillo          #+#    #+#              #
#    Updated: 2015/02/25 17:51:41 by vchaillo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fractol

SRCS_NAME = main.c\
		   	mlx.c\
			draw.c\
			error_msg.c\
			menus.c\
			strings.c\
			mandel.c\

SRCS_PATH = ./srcs/

OBJS_NAME = $(SRCS_NAME:.c=.o)

OBJS_PATH = ./objs/

SRCS = $(addprefix $(SRCS_PATH),$(SRCS_NAME))

OBJS = $(addprefix $(OBJS_PATH),$(OBJS_NAME))

FLAGS = -Wall -Wextra -Werror

LIBFT = -Llibft -lft

LIBFT_H = -I libft/includes/

HEADERS = -I includes/

LIB_MLX = -L/usr/X11/lib -lmlx -lXext -lX11

all: $(NAME)

$(NAME):
	@make -C libft/ fclean
	@make -C libft/
	@gcc -g $(FLAGS) $(LIBFT_H) $(HEADERS) -c $(SRCS)
	@mkdir $(OBJS_PATH)
	@mv $(OBJS_NAME) $(OBJS_PATH)
	@gcc -o $(NAME) $(OBJS) $(LIBFT) $(LIB_MLX)
	@echo "\033[32mfractol was created\033[0m"

norm:
	@echo "\033[32mnorminette...\033[0m"
	@norminette **/*.[ch]

clean:
	@rm -rf $(OBJS_PATH)
	@echo "\033[31mSuppression des .o\033[0m"

fclean: clean
	@rm -rf $(NAME)
	@echo "\033[31mSuppression de fdf\033[0m"

re: fclean all

.PHONY: all norm clean fclean re
