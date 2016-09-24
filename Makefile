# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ekorley <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/09/21 10:03:37 by ekorley           #+#    #+#              #
#    Updated: 2016/09/24 09:54:47 by ekorley          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# We define our groups' files by category
NAME = libft.a
FT_LISTS = ft_lstnew.o ft_lstdelone.o ft_lstdel.o ft_lstadd.o \
		  ft_listiter.o ft_lstmap.o ft_lstfold.o
FT_STREAMS = ft_putchar.o ft_putstr.o ft_putendl.o ft_putnbr.o \
			ft_putchar_fd.o ft_putstr_fd.o ft_putendl_fd.o \
			ft_putnbr_fd.o
FT_STRINGS = ft_strlen.o ft_toupper.o ft_tolower.o ft_atoi.o \
			ft_itoa.o ft_isalpha.o ft_isdigit.o ft_isalnum.o \
			ft_isascii.o ft_isprint.o ft_strdup.o ft_strcpy.o \
			ft_strncpy.o ft_strcat.o ft_strncat.o ft_strlcat.o \
			ft_strchr.o ft_strrchr.o ft_strstr.o ft_strnstr.o \
			ft_strcmp.o ft_strncmp.o ft_strnew.o ft_strdel.o \
			ft_strclr.o ft_striter.o ft_striteri.o ft_strmap.o \
			ft_strmapi.o ft_strequ.o ft_strnequ.o ft_strsub.o \
			ft_strjoin.o ft_strtrim.o ft_strsplit.o
FT_MEMORY = ft_bzero.o ft_memset.o ft_memcpy.o ft_memccpy.o \
			ft_memmove.o ft_memchr.o ft_memrchr.o ft_memcmp.o \
			ft_memalloc.o ft_memdel.o
OBJECTS = $(FT_MEMORY) $(FT_STRINGS)

# Our default rule to create our library.
all: $(NAME)

# Here we generate our library and index the result for better searching.
$(NAME): $(OBJECTS)
	norminette
	ar rc $(NAME) $(OBJECTS)
	ranlib $(NAME)

# The following rule is a pattern for converting how make
# should convert *.o files specified as dependencies to *.c.
# $@ is the name of the target to be transformed (e.g. ft_strlen.o) and
# $< is the name of the result (e.g. ft_strlen.c).
%.o: %.c
	gcc -Wall -Werror -Wextra -c -o $@ $<

# Our utility rules
clean:
	rm -f *.o
fclean: clean
	rm -f $(NAME)
re: fclean all
