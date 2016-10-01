/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   new_matrix.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekorley <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/29 14:32:24 by ekorley           #+#    #+#             */
/*   Updated: 2016/10/01 08:37:13 by ekorley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	Creates a new bzero'd matrix of specified dimensions.
*/

t_matrix		*new_matrix(int x, int y)
{
	t_matrix	*matrix;
	int			i;

	matrix = (t_matrix *)malloc(sizeof(t_matrix));
	if (!matrix)
		return (NULL);
	matrix->board = (int **)ft_memalloc(sizeof(int) * y);
	if (!matrix)
		return (NULL);
	i = -1;
	while (++i < y)
	{
		matrix->board[i] = (int *)ft_memalloc(sizeof(int) * x);
		if (!matrix->board[i])
			return (NULL);
	}
	matrix->width = x;
	matrix->height = y;
	return (matrix);
}
