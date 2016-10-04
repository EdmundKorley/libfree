/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekorley <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/23 17:54:42 by ekorley           #+#    #+#             */
/*   Updated: 2016/09/28 10:06:39 by ekorley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	Checks if a char (received as an int for historical reasons),
**	is an alphabetical character.
*/

int		ft_isalpha(int c)
{
	return (ft_isupper(c) || ft_islower(c));
}
