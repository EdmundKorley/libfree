/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekorley <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/22 17:16:35 by ekorley           #+#    #+#             */
/*   Updated: 2016/09/25 15:48:50 by ekorley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char		*buffer;
	size_t					i;

	buffer = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (buffer[i] == (unsigned char)c)
			return ((unsigned char *)(buffer + i));
		i++;
	}
	return (NULL);
}
