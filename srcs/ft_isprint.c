/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekorley <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/23 18:07:27 by ekorley           #+#    #+#             */
/*   Updated: 2016/09/28 10:11:45 by ekorley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	Checks if a character is a valid printable character.
*/

int		ft_isprint(int c)
{
	return (ft_isalnum(c) || ft_ismiscellanous(c));
}
