/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   matrix_matrix_product.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekorley <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/29 13:20:17 by ekorley           #+#    #+#             */
/*   Updated: 2016/09/29 15:30:27 by ekorley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	Calculates the product of a matrix-by-matrix multiplication.
**	Note that for matrix-by-matrix multiplication to be valid, the
**	width of matrix A needs to be the same as the height of
**	matrix B. We term this shared feature as `shared_dim`.
**
**	Due to norminette's limit on the number of parameters,
**	we only support matrices of the same dimensions.
*/

static int		*get_matrix_column(int **matrix, int height, int col_index)
{
	int		i;
	int		j;
	int		*column;

	i = -1;
	j = 0;
	column = (int *)ft_memalloc(sizeof(int) * height);
	if (!column)
		return (NULL);
	while (++i < height)
		column[j++] = matrix[i][col_index];
	return (column);
}

int				**matrix_matrix_product(int **matrix_a, int filler,
				int **matrix_b, int shared_dim)
{
	int		**result;
	int		*column;
	int		i;
	int		j;

	result = ft_memalloc(sizeof(int *) * shared_dim);
	i = -1;
	while (++i < filler)
	{
		j = -1;
		while (++j < filler)
		{
			column = get_matrix_column(matrix_b, shared_dim, j);
			result[i][j] = vector_dot_product(matrix_a[i], column, shared_dim);
			ft_memdel((void **)&column);
		}
	}
	return (result);
}
