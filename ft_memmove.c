/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekorley <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/22 16:32:37 by ekorley           #+#    #+#             */
/*   Updated: 2016/09/29 18:37:56 by ekorley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	Ferries bytes from one buffer into another, even if the buffers overlap.
*/

void	*ft_memmove(void *s1, const void *s2, size_t n)
{
	unsigned char	*buf1;
	unsigned char	*buf2;
	size_t			i;

	if (s1 < s2)
		return (ft_memcpy(s1, s2, n));
	if (s1 == s2 || !n)
		return (s1);
	buf1 = (unsigned char *)s1;
	buf2 = (unsigned char *)s2;
	i = n;
	while (i--)
		buf1[i] = buf2[i];
	return (buf1);
}
