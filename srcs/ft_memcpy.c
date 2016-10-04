/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekorley <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/22 16:30:47 by ekorley           #+#    #+#             */
/*   Updated: 2016/09/22 16:35:58 by ekorley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	Copies n-bytes from buffer into another.
*/

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t					i;
	unsigned char			*buffer;
	const unsigned char		*source;

	i = 0;
	buffer = (unsigned char *)dest;
	source = (const unsigned char *)src;
	while (i < n)
	{
		buffer[i] = source[i];
		i++;
	}
	return (dest);
}
