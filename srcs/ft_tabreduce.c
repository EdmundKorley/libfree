/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tabreduce.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekorley <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/28 10:50:55 by ekorley           #+#    #+#             */
/*   Updated: 2016/09/28 10:58:12 by ekorley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	Iterates through an integer table, and buildings a singular result out of
**	the set of integer values.
*/

int		ft_tabreduce(int *tab, int len, int memo, int (*f)(int, int))
{
	int		result;
	int		i;

	result = memo;
	i = 0;
	while (i < len && tab)
	{
		result = f(result, tab[i]);
	}
	return (result);
}
