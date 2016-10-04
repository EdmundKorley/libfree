/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekorley <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/28 10:06:58 by ekorley           #+#    #+#             */
/*   Updated: 2016/09/28 10:08:14 by ekorley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	Checks if a char (received as int for historical reasons) is a valid
**	uppercase character.
*/

int		ft_isupper(int c)
{
	return ('A' <= c && c <= 'Z');
}
