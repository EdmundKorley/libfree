# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ekorley <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/09/25 14:36:54 by ekorley           #+#    #+#              #
#    Updated: 2016/10/03 20:04:37 by ekorley          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC		= gcc
CFLAGS	= -Wall -Wextra -Werror
SRC		= srcs/*.c
OBJ		= *.o

all: $(NAME)

$(NAME):
	@$(CC) $(CFLAGS) -I./includes -c $? $(SRC)
	@ar rc $(NAME) $? $(OBJ)
	@ranlib $(NAME)
	@echo "\033[32mSuccessfully generated $(NAME)\033[0m"

clean:
	@/bin/rm -f $(OBJ)
	@echo "\033[32mCleaned up object files from generating $(NAME)\033[0m"

fclean: clean
	@/bin/rm $(NAME)
	@echo "\033[32mCleaned up $(NAME)\033[0m"

re: fclean all

.PHONY: all clean fclean re
