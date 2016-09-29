/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   matrix_map.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekorley <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/29 15:09:23 by ekorley           #+#    #+#             */
/*   Updated: 2016/09/29 15:22:53 by ekorley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	Iterates through all items of a matrix, applying a callback function
**	that returns a new int that is to go into a new matrix.
*/

int		**matrix_map(int **matrix, int m, int n, int (*applyf)(int))
{
	int		i;
	int		j;
	int		**buffer;

	i = -1;
	buffer = new_matrix(m, n);
	if (!buffer)
		return (buffer);
	while (++i < n)
	{
		j = -1;
		while (++j < m)
			buffer[i][j] = applyf(matrix[i][j]);
	}
	return (buffer);
}
