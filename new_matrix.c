/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   new_matrix.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekorley <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/29 14:32:24 by ekorley           #+#    #+#             */
/*   Updated: 2016/09/29 14:37:13 by ekorley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	Creates a new bzero'd matrix of specified dimensions.
*/

int		**new_matrix(int x, int y)
{
	int		**matrix;
	int		i;

	matrix = (int **)ft_memalloc(sizeof(int) * y);
	if (!matrix)
		return (NULL);
	i = -1;
	while (++i < y)
	{
		matrix[i] = (int *)ft_memalloc(sizeof(int) * x);
		if (!matrix[i])
			return (NULL);
	}
	return (matrix);
}
