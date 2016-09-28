/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tabmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekorley <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/28 10:46:18 by ekorley           #+#    #+#             */
/*   Updated: 2016/09/28 11:42:27 by ekorley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	Iterates through an integer table, applying a callback function to
**	each item, saving the result in a new table.
*/

int		*ft_tabmap(int *tab, int len, int (*f)(int))
{
	int		i;
	int		*buffer;

	i = 0;
	buffer = (int *)ft_memalloc(sizeof(int) * len);
	while (i < len && buffer && tab)
	{
		buffer[i] = f(tab[i]);
		i++;
	}
	return (buffer);
}
