/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekorley <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/22 17:33:07 by ekorley           #+#    #+#             */
/*   Updated: 2016/09/22 17:39:11 by ekorley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	Allocates a buffer of memory and fills it with NUL-characters. If
**	the allocation is unsuccessful, it propagates the NULL pointer.
*/

void	*ft_memalloc(size_t size)
{
	void	*buffer;

	buffer = malloc(size);
	if (buffer == NULL)
		return (NULL);
	ft_bzero(buffer, size);
	return (buffer);
}
