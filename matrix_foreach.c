/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   matrix_foreach.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekorley <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/29 15:02:27 by ekorley           #+#    #+#             */
/*   Updated: 2016/09/29 15:18:25 by ekorley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	Iterates through all items in a m-by-n matrix and applies a callback
**	function to that item.
*/

void	matrix_foreach(int **matrix, int m, int n, void (*applyf)(int))
{
	int		i;
	int		j;

	i = -1;
	while (++i < n)
	{
		j = -1;
		while (++j < m)
			applyf(matrix[i][j]);
	}
}
