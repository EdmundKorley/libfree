/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ismiscellanous.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekorley <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/28 10:11:56 by ekorley           #+#    #+#             */
/*   Updated: 2016/09/28 10:13:10 by ekorley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	Checks if a character is a valid printable yet non-alphanumeric character.
*/

int		ft_ismiscellanous(int c)
{
	return ((32 <= c && c <= 47)
			|| (58 <= c && c <= 64)
			|| (91 <= c && c <= 96)
			|| (123 <= c && c <= 126));
}
