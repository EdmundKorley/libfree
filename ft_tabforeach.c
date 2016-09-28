/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tabforeach.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekorley <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/28 10:42:55 by ekorley           #+#    #+#             */
/*   Updated: 2016/09/28 10:46:00 by ekorley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Iterate through a table of integers and apply a callback function to each
** item.
*/

void	ft_tabforeach(int *tab, int len, void (*f)(int))
{
	int		i;

	i = 0;
	while (i < len)
	{
		f(tab[i]);
		i++;
	}
}
