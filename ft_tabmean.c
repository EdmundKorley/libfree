/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tabmean.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekorley <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/28 11:33:19 by ekorley           #+#    #+#             */
/*   Updated: 2016/09/28 11:35:02 by ekorley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	Calculates the mean of a table of integers, with the caveat that
**	the result is truncated to be a whole number and to fit an int type.
*/

int		ft_tabmean(int *tab, int len)
{
	int		sum;

	sum = ft_tabsum(tab, len);
	return (sum / len);
}
