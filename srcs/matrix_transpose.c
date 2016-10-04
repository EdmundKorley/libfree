/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   matrix_transpose.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekorley <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/29 14:25:01 by ekorley           #+#    #+#             */
/*   Updated: 2016/10/01 08:41:52 by ekorley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	Returns the transpose of a matrix, where each item at coordinates i, j
**	is now located at j, i.
*/

t_matrix	*matrix_transpose(t_matrix *matrix)
{
	t_matrix	*buffer;
	int			i;
	int			j;

	buffer = new_matrix(matrix->width, matrix->height);
	i = -1;
	while (++i < matrix->height)
	{
		j = -1;
		while (++j < matrix->width)
			buffer->board[j][i] = matrix->board[i][j];
	}
	return (buffer);
}
