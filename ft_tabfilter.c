/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tabfilter.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekorley <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/28 10:59:13 by ekorley           #+#    #+#             */
/*   Updated: 2016/09/28 11:11:44 by ekorley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	Iterates through an integer table and creates a new array with
**	specific items filtered out that do not fit a boolean returning
**	callback function.
*/

int		*ft_tabfilter(int *tab, int len, int (*f)(int))
{
	int		count;
	int		i;
	int		j;
	int		*buffer;

	i = 0;
	count = 0;
	if (!tab)
		return (NULL);
	while (i++ < len)
		if (f(tab[i]))
			count++;
	buffer = (int *)ft_memalloc(sizeof(int) * count);
	if (!buffer)
		return (NULL);
	i = 0;
	j = 0;
	while (i++ < len)
		if (f(tab[i]))
			buffer[j++] = tab[i];
	return (buffer);
}
