/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   matrix_transpose.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekorley <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/29 14:25:01 by ekorley           #+#    #+#             */
/*   Updated: 2016/09/29 14:37:48 by ekorley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	Returns the transpose of a matrix, where each item at coordinates i, j
**	is now located at j, i.
*/

int		**matrix_transpose(int **matrix, int w, int h)
{
	int		**buffer;
	int		i;
	int		j;

	buffer = new_matrix(h, w);
	i = -1;
	while (++i < w)
	{
		j = -1;
		while (++j < h)
			buffer[i][j] = matrix[j][i];
	}
	return (buffer);
}
