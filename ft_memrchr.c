/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekorley <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/22 17:22:25 by ekorley           #+#    #+#             */
/*   Updated: 2016/09/25 15:07:12 by ekorley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memrchr(const void *s, int c, size_t n)
{
	const unsigned char		*buffer;
	size_t					i;

	buffer = (const unsigned char *)s;
	i = n - 1;
	while (i > 0)
	{
		if (buffer[i] == c)
			return ((void *)(buffer + i));
		i--;
	}
	if (*buffer == (unsigned char)c)
		return ((void *)buffer);
	return (NULL);
}
