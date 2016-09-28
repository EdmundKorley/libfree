/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekorley <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/21 11:34:32 by ekorley           #+#    #+#             */
/*   Updated: 2016/09/28 10:28:29 by ekorley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H

# define LIBFT_H
# define TRAD(x) (x == ' ' || x == '\t' || x == '\n')
# define MISC(x) (x == '\v' || x == '\r' || x == '\f')
# define WS(x) (TRAD(x) || MISC(x))
# include <stdlib.h>
# include <unistd.h>
# include <string.h>

/*
**	These set of functions manipulate raw memory at the byte level.
*/

void				ft_bzero(void *s, size_t n);
void				*ft_memset(void *b, int c, size_t len);
void				*ft_memcpy(void *dest, const void *src, size_t n);
void				*ft_memccpy(void *dest, const void *src, int c, size_t n);
void				*ft_memmove(void *dest, const void *src, size_t n);
void				*ft_memchr(const void *s, int c, size_t n);
void				*ft_memrchr(const void *s, int c, size_t n);
int					ft_memcmp(const void *s1, const void *s2, size_t n);
void				*ft_memalloc(size_t size);
void				ft_memdel(void **ap);
void				*ft_memrotate(void *buffer, size_t size, int torotate);

/*
**	These set of functions manipulate strings,
**	and primitive data types like ints and chars.
*/

size_t				ft_strlen(const char *s);
int					ft_tolower(int c);
int					ft_toupper(int c);
int					ft_ctoi(char letter);
int					ft_atoi(const char *str);
char				*ft_itoa(int n);
int					ft_maxint(int num1, int num2);
int					ft_lenofint(int n);
int					ft_isalpha(int c);
int					ft_isupper(int c);
int					ft_islower(int c);
int					ft_isdigit(int c);
int					ft_isalnum(int c);
int					ft_isascii(int c);
int					ft_isprint(int c);
int					ft_ismiscellanous(int c);
char				*ft_strdup(const char *s1);
char				*ft_strcpy(char *dst, const char *src);
char				*ft_strncpy(char *dst, const char *src, size_t len);
char				*ft_strcat(char *s1, const char *s2);
char				*ft_strncat(char *s1, const char *s2, size_t n);
size_t				ft_strlcat(char *dst, const char *src, size_t size);
char				*ft_strrchr(const char *s, int c);
char				*ft_strchr(const char *s, int c);
int					ft_strcmp(const char *s1, const char *s2);
int					ft_strncmp(const char *s1, const char *s2, size_t n);
char				*ft_strstr(const char *big, const char *lil);
char				*ft_strnstr(const char *big, const char *lil, size_t len);
char				*ft_strnew(size_t size);
void				ft_strdel(char **as);
void				ft_strclr(char *s);
void				ft_striter(char *s, void (*f)(char *));
void				ft_striteri(char *s, void (*f)(unsigned int, char *));
char				*ft_strmap(char const *s, char (*f)(char));
char				*ft_strmapi(char const *s, char (*f)(unsigned int, char));
int					ft_strequ(char const *s1, char const *s2);
int					ft_strnequ(char const *s1, char const *s2, size_t n);
char				*ft_strsub(char const *s, unsigned int start, size_t len);
char				*ft_strjoin(char const *s1, char const *s2);
char				*ft_strtrim(char const *s);
char				**ft_strsplit(char const *s, char c);

/*
**	These set of functions implement useful routines on integer arrays.
*/

void				ft_tabforeach(int *tab, int len, void (*f)(int));
int					*ft_tabmap(int *tab, int len, int (*f)(int));
int					*ft_tabreduce(int *tab, int len, int (*f)(int, int));
int					*ft_tabfilter(int *tab, int len, int (*f)(int));
int					ft_tabsum(int *tab, int len);
int					ft_tabmax(int *tab, int len);
int					ft_tabmin(int *tab, int len);
int					ft_tabmode(int *tab, int len);
int					ft_tabmean(int *tab, int len);
int					ft_tabrotate(int *tab, int len, int torotate);

/*
**	These set of functions involving sending data to different streams,
**	either standard out or a specified stream.
*/

void				ft_putchar(char c);
void				ft_putstr(char const *s);
void				ft_putendl(char const *s);
void				ft_putnbr(int n);
void				ft_putchar_fd(char c, int fd);
void				ft_putstr_fd(char const *s, int fd);
void				ft_putendl_fd(char const *s, int fd);
void				ft_putnbr_fd(int n, int fd);

/*
**	These set of functions involve creating and manipulating linked lists.
*/

typedef	struct		s_list
{
	void			*content;
	size_t			content_size;
	struct s_list	*next;
}					t_list;

t_list				*ft_lstnew(void const *content, size_t content_size);
void				ft_lstdelone(t_list **alst, void (*del)(void *, size_t));
void				ft_lstdel(t_list **alst, void(*del)(void *, size_t));
void				ft_lstadd(t_list **alst, t_list *new);
void				ft_lstiter(t_list *lst, void (*f)(t_list *elem));
t_list				*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem));

/*
**	These set of functions involve creating and manipulating binary trees.
*/

typedef	struct		s_btree
{
	struct s_btree	*left;
	struct s_btree	*right;
	void			*item;
}					t_btree;

t_btree				*btree_create_node(void *item);
void				btree_apply_infix(t_btree *root, void (*applyf)(void *));
void				btree_apply_prefix(t_btree *root, void (*applyf)(void *));
void				btree_apply_suffix(t_btree *root, void (*applyf)(void *));
int					btree_level_count(t_btree *root);
void				*btree_search_item(t_btree *root, void *data_ref,
					int (*cmpf)(void*, void*));

/*
**	These set of functions involve creating and manipulating stacks.
*/

/*
**	These set of functions involve creating and manipulating dynamic arrays,
**	the kind you might find in a higher level language like Python.
*/

#endif
