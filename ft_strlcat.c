/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekorley <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/24 05:45:50 by ekorley           #+#    #+#             */
/*   Updated: 2016/09/26 10:46:47 by ekorley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	ft_strlcat copies and concatenates a source string into a destination
**	string. It is meant to be more robust than strncat because ft_strlcat takes
**	the full size of the buffer into account and conditionally NUL-terminates
**	the result.
*/

#include "libft.h"

size_t		ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t		i;
	size_t		re;

	re = 0;
	i = -1;
	while (src[++i])
		;
	re = i;
	i = -1;
	while (dst[++i] && i < size)
		;
	if (i < size)
		re += i;
	else
		re += size;
	if ((int)(size - ft_strlen(dst) - 1) > 0)
		ft_strncat(dst, src, size - ft_strlen(dst) - 1);
	return (re);
}
