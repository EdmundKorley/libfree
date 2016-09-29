/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   matrix_reduce.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekorley <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/29 15:23:19 by ekorley           #+#    #+#             */
/*   Updated: 2016/09/29 15:26:03 by ekorley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	Reduces all items of a matrix into a singular int value.
*/

int		matrix_reduce(int **matrix, int m, int n, int (*applyf)(int, int))
{
	int		i;
	int		j;
	int		memo;

	memo = 0;
	i = -1;
	while (++i < n)
	{
		j = -1;
		while (++j < m)
			memo = applyf(memo, matrix[i][j]);
	}
	return (memo);
}
