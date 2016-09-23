/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekorley <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/22 17:25:27 by ekorley           #+#    #+#             */
/*   Updated: 2016/09/22 17:32:02 by ekorley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char		*buf1;
	const unsigned char		*buf2;
	size_t		i;

	buf1 = (unsigned char *)s1;
	buf2 = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (buf1[i] != buf2[i])
			return (buf1 - buf2);
		i++;
	}
	return (0);
}
