# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ekorley <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/09/25 14:36:54 by ekorley           #+#    #+#              #
#    Updated: 2016/09/29 15:46:55 by ekorley          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = cc
CFLAGS = -Wall -Wextra -Werror
SRC =	ft_{maxint,ctoi,atoi,itoa,lenofint}.c \
		ft_bzero.c \
		ft_mem{alloc,ccpy,rchr,chr,cmp,cpy,del,move,set}.c \
		ft_put{char,char_fd,endl,endl_fd,nbr,nbr_fd,str,str_fd}.c \
		ft_strcat.c \
		ft_strrev.c \
		ft_strchr.c \
		ft_strclr.c \
		ft_strcmp.c \
		ft_strcpy.c \
		ft_strdel.c \
		ft_strdup.c \
		ft_strequ.c \
		ft_is{lower,upper,miscellanous,alpha,print,alnum,ascii,digit}.c \
		ft_str{iter,iteri}.c \
		ft_strjoin.c \
		ft_strlcat.c \
		ft_strlen.c \
		ft_str{map,mapi}.c \
		ft_strncat.c \
		ft_strncmp.c \
		ft_strncpy.c \
		ft_strnequ.c \
		ft_strnew.c \
		ft_strnstr.c \
		ft_strrchr.c \
		ft_strsplit.c \
		ft_strstr.c \
		ft_strsub.c \
		ft_strtrim.c \
		ft_to{lower,upper}.c \
		ft_lst{add,del,delone,iter,map,new}.c \
		btree_{create_node,apply_infix,apply_prefix}.c \
		btree_{apply_suffix,level_count,search_item}.c \
		ft_tab{foreach,map,reduce,filter,sum,max,min,mean,newrange,rotate}.c \
		new_matrix.c \
		vector_{dot_product,to_matrix}.c \
		matrix_{matrix_product,transpose,foreach,map,reduce}.c \
		encode_base_n.c \
		decode_base_n.c \
		fixed_xor.c

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME):
	@$(CC) $(CFLAGS) -c $? $(SRC)
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
