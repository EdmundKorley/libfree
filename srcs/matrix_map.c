/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   matrix_map.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekorley <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/29 15:09:23 by ekorley           #+#    #+#             */
/*   Updated: 2016/10/01 08:44:44 by ekorley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	Iterates through all items of a matrix, applying a callback function
**	that returns a new int that is to go into a new matrix.
*/

t_matrix	*matrix_map(t_matrix *matrix, int (*applyf)(int))
{
	int			i;
	int			j;
	t_matrix	*buffer;

	i = -1;
	buffer = new_matrix(matrix->width, matrix->height);
	if (!buffer)
		return (buffer);
	while (++i < matrix->height)
	{
		j = -1;
		while (++j < matrix->width)
			buffer->board[i][j] = applyf(matrix->board[i][j]);
	}
	return (buffer);
}
