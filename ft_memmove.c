/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekorley <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/22 16:32:37 by ekorley           #+#    #+#             */
/*   Updated: 2016/09/29 17:25:46 by ekorley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	Ferries bytes from one buffer into another, even if the buffers overlap.
*/

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*temp;

	temp = (unsigned char *)ft_memalloc(n);
	if (!temp)
		return (NULL);
	ft_memcpy(temp, src, n);
	ft_memcpy(dest, temp, n);
	ft_memdel((void **)&temp);
	return (dest);
}
