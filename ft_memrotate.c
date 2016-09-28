/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memrotate.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekorley <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/28 12:02:56 by ekorley           #+#    #+#             */
/*   Updated: 2016/09/28 12:09:42 by ekorley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	Rotate a buffer of memory by a factor of the value nrotate.
**	Note that this rotation occurs on a byte-by-bytes level.
*/

void	*ft_memrotate(void *s, size_t size, size_t nrotate)
{
	size_t		torotate;
	size_t		offset;
	void		*buffer;

	torotate = nrotate % size;
	if (torotate == 0)
		return (s);
	buffer = ft_memalloc(size);
	if (!buffer)
		return (NULL);
	offset = size - nrotate;
	buffer = ft_memcpy(buffer, s + offset, nrotate);
	buffer = ft_memcpy(buffer + offset, s, size - nrotate);
	return (buffer);
}
