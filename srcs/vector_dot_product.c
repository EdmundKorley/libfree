/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector_dot_product.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekorley <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/29 13:10:14 by ekorley           #+#    #+#             */
/*   Updated: 2016/09/29 15:07:50 by ekorley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	Calculates the vector dot product between two integer tables
**	at a given size len.
*/

int		vector_dot_product(int *x, int *y, int len)
{
	int		i;
	int		result;

	i = 0;
	result = 0;
	while (i < len)
	{
		result += (x[i] * y[i]);
		i++;
	}
	return (result);
}
