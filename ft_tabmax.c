/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tabmax.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekorley <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/28 11:23:30 by ekorley           #+#    #+#             */
/*   Updated: 2016/09/28 11:28:25 by ekorley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	Calculates the minimum item in a table of integers.
*/

static int		ft_isbiggerint(int memo, int item)
{
	if (item > memo)
		return (item);
	return (memo);
}

int				ft_tabmax(int *tab, int len)
{
	int		max;

	if (len == 0 || !tab)
		return (0);
	max = ft_tabreduce(tab, len, tab[0], ft_isbiggerint);
	return (max);
}
