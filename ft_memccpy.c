/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekorley <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/22 16:24:48 by ekorley           #+#    #+#             */
/*   Updated: 2016/09/22 16:36:45 by ekorley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t					i;
	unsigned char			*buffer;
	const unsigned char		*source;

	i = 0;
	buffer = (unsigned char *)dest;
	source = (const unsigned char *)src;
	while (i < n && source[i] != c)
	{
		buffer[i] = source[i];
		i++;
	}
	return (dest);
}
