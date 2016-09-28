/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tabnewrange.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekorley <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/28 11:35:24 by ekorley           #+#    #+#             */
/*   Updated: 2016/09/28 11:40:34 by ekorley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	Generates a new table of integers with a given range.
*/

int		*ft_tabnewrange(int start, int end, int skip)
{
	int		count;
	int		*buffer;
	int		i;
	int		j;

	count = 0;
	i = start;
	while (start < end)
	{
		count++;
		start += skip;
	}
	buffer = (int *)ft_memalloc(sizeof(char) * count);
	if (!buffer)
		return (NULL);
	j = 0;
	while (i < end)
	{
		buffer[j++] = i;
		i += skip;
	}
	return (buffer);
}
