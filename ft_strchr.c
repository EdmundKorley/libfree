/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekorley <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/24 05:57:18 by ekorley           #+#    #+#             */
/*   Updated: 2016/09/26 05:58:49 by ekorley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	Performs a linear search on a buffer for the character represented
**	by c.
*/

char	*ft_strchr(const char *src, int c)
{
	while (*src)
	{
		if (*src == c)
			return ((char*)src);
		src++;
	}
	if (*src == c)
		return ((char*)src);
	return (NULL);
}
