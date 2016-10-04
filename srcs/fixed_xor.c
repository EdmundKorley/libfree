/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fixed_xor.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekorley <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/29 13:04:31 by ekorley           #+#    #+#             */
/*   Updated: 2016/09/29 13:09:28 by ekorley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	Performs a fixed XOR operation on a byte-by-byte level for two buffers.
*/

void	*fixed_xor(void *buffer_a, void *buffer_b, size_t len)
{
	char		*result;
	char		*buf1;
	char		*buf2;
	size_t		i;

	result = (char *)ft_memalloc(len);
	buf1 = (char *)buffer_a;
	buf2 = (char *)buffer_b;
	if (!result)
		return (NULL);
	i = -1;
	while (++i < len)
		result[i] = buf1[i] ^ buf2[i];
	return ((void *)result);
}
