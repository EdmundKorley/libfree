/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekorley <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/24 05:45:50 by ekorley           #+#    #+#             */
/*   Updated: 2016/09/29 17:10:34 by ekorley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	ft_strlcat copies and concatenates a source string into a destination
**	string. It is meant to be more robust than strncat because ft_strlcat takes
**	the full size of the buffer into account and conditionally NUL-terminates
**	the result.
*/

size_t		ft_strlcat(char *dst, const char *src, size_t size)
{
	char			*buffer;
	char			*head;
	size_t			n;
	size_t			dlen;

	buffer = dst;
	head = (char *)src;
	n = size;
	while (n-- != 0 && *buffer != '\0')
		buffer++;
	dlen = buffer - dst;
	n = size - dlen;
	if (n == 0)
		return (dlen + ft_strlen(src));
	while (*src)
	{
		if (n != 1)
		{
			*buffer++ = *src;
			n--;
		}
		src++;
	}
	*buffer = '\0';
	return (dlen + (src - head));
}
