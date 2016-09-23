/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekorley <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/22 17:22:25 by ekorley           #+#    #+#             */
/*   Updated: 2016/09/22 17:24:33 by ekorley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*memrchr(const void *s, int c, size_t n)
{
	const unsigned char		*buffer;
	size_t					i;

	buffer = (const unsigned char *)s;
	i = n - 1;
	while (i > 0)
	{
		if (buffer[i] == c)
			return ((void *)buffer + i);
		i--;
	}
	return (0);
}
