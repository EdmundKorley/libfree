/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tabrotate.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekorley <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/28 11:56:00 by ekorley           #+#    #+#             */
/*   Updated: 2016/09/28 18:24:54 by ekorley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	Rotate an integer table by a factor of the value of nrotate.
**	Note that rotation occurs on a int-by-int level.
*/

int		*ft_tabrotate(int *tab, int len, int nrotate)
{
	int		torotate;
	int		offset;
	int		*buffer;

	torotate = nrotate % len;
	if (torotate == 0)
		return (tab);
	buffer = (int *)ft_memalloc(sizeof(int) * len);
	if (!buffer)
		return (NULL);
	offset = len - torotate;
	buffer = ft_memcpy(buffer, tab + offset, sizeof(int) * torotate);
	buffer = ft_memcpy(buffer + torotate, tab, sizeof(int) * (len - torotate));
	return (buffer - torotate);
}
