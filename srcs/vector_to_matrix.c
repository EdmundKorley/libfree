/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector_to_matrix.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekorley <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/29 14:48:57 by ekorley           #+#    #+#             */
/*   Updated: 2016/10/01 08:57:31 by ekorley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	Converts an integer table into a matrix. `is_vertical` acts as a bool for
**	whether the vector is turned into a column or a row matrix.
*/

t_matrix		*make_col_matrix(int *vector, int len)
{
	int			i;
	t_matrix	*col_matrix;

	i = -1;
	col_matrix = new_matrix(1, len);
	if (!col_matrix)
		return (NULL);
	while (++i < len)
		col_matrix->board[i][0] = vector[i];
	return (col_matrix);
}

t_matrix		*vector_to_matrix(int *vector, int len, int is_vertical)
{
	int			i;
	t_matrix	*buffer;

	if (is_vertical)
		return (make_col_matrix(vector, len));
	i = -1;
	buffer = new_matrix(len, 1);
	if (!buffer)
		return (NULL);
	while (++i < len)
	{
		buffer->board[0][i] = vector[i];
	}
	return (buffer);
}
