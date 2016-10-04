/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tabmin.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekorley <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/28 11:29:00 by ekorley           #+#    #+#             */
/*   Updated: 2016/09/28 11:30:09 by ekorley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	Calculates the minimum item in a table of integers.
*/

static int		ft_islowerint(int memo, int item)
{
	if (item < memo)
		return (item);
	return (memo);
}

int				ft_tabmin(int *tab, int len)
{
	int		min;

	if (len == 0 || !tab)
		return (0);
	min = ft_tabreduce(tab, len, tab[0], ft_islowerint);
	return (min);
}
