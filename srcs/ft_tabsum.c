/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tabsum.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekorley <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/28 11:12:08 by ekorley           #+#    #+#             */
/*   Updated: 2016/09/28 11:22:51 by ekorley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	Calculates the sum of all items in an integer tab.
*/

static int		ft_addints(int num1, int num2)
{
	return (num1 + num2);
}

int				ft_tabsum(int *tab, int len)
{
	int		sum;

	sum = ft_tabreduce(tab, len, 0, ft_addints);
	return (sum);
}
