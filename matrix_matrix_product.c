/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   matrix_matrix_product.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekorley <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/29 13:20:17 by ekorley           #+#    #+#             */
/*   Updated: 2016/10/01 08:59:27 by ekorley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	Calculates the product of a matrix-by-matrix multiplication.
**	Note that for matrix-by-matrix multiplication to be valid, the
**	width of matrix A needs to be the same as the height of
**	matrix B.
*/

static int		*get_cl_vector(t_matrix *matrix, int cl_index)
{
	int		i;
	int		j;
	int		*cl;

	i = 0;
	j = 0;
	cl = (int *)ft_memalloc(sizeof(int) * matrix->height);
	if (!cl)
		return (NULL);
	while (i < matrix->height)
		cl[j++] = matrix->board[i++][cl_index];
	return (cl);
}

t_matrix		*matrix_matrix_product(t_matrix *a, t_matrix *b)
{
	t_matrix	*result;
	int			*cl;
	int			i;
	int			j;

	if (a->width != b->height)
		return (NULL);
	result = new_matrix(a->height, b->width);
	i = -1;
	while (++i < b->height)
	{
		j = -1;
		while (++j < a->width)
		{
			cl = get_cl_vector(b, j);
			result->board[i][j] = vector_dot_product(a->board[i], cl, a->width);
			ft_memdel((void **)&cl);
		}
	}
	return (result);
}
