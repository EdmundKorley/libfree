/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekorley <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/23 16:39:03 by ekorley           #+#    #+#             */
/*   Updated: 2016/09/25 15:58:52 by ekorley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	Calculates the number of characters in a NUL-terminated string.
*/

size_t		ft_strlen(const char *s)
{
	size_t		count;

	count = 0;
	while (*s)
	{
		s++;
		count++;
	}
	return (count);
}
