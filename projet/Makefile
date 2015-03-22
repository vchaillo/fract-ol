#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jbarbie <jbarbie@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/02/20 18:44:07 by jbarbie           #+#    #+#              #
#    Updated: 2015/03/22 04:28:24 by vchaillo         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME 	=	fractol

CC	=	gcc

CFLAGS	+=	-Wall -Wextra -Werror

SRC	=	main.c \
		mlx.c\
		draw.c \
		error_msg.c \
		menus.c\
		strings.c\
		mandel.c\
		julia.c\
		other.c\
		key_hook.c\
		mouse_hook.c\

LIBMLX 	= 	-Lminilibx/ -lmlx -framework OpenGL -framework AppKit

LIBFT	=	-Llibft/ -lft

INC	=	-I inc/ -I minilibx/ -I libft/includes/

OBJ	=	$(patsubst %.c, obj/%.o, $(SRC))

RM	=	rm -Rf

all:   $(NAME)


$(NAME): obj $(OBJ)
		@$(CC) $(CFLAGS) -o $@ $(OBJ) $(LIBMLX) $(LIBFT)

obj/%.o: src/%.c
		@gcc $(CFLAGS) $(INC) -o $@ -c $<
		@echo "[\033[1;32m√\033[m]" $<

obj:
		@mkdir -p obj

clean:
		@echo "\033[31;1mCleaning files .o ...\033[0m"
		@$(RM) obj/

fclean:	clean
		@echo "\033[31;1mCleaning executables...\033[0m"
		@$(RM) $(NAME)

norm:
		@echo "\033[32mnorminette...\033[0m"
		@norminette **/*.[ch]

re: fclean all

.PHONY: all clean fclean norm re
