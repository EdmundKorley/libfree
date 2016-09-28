/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_islower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekorley <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/28 10:08:20 by ekorley           #+#    #+#             */
/*   Updated: 2016/09/28 10:09:05 by ekorley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	Checks if a char (received as a int for historical reasons) is a valid
**	lowercase character.
*/

int		ft_islower(int c)
{
	return ('a' <= c && c <= 'z');
}
