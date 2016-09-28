/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ctoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekorley <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/28 10:03:41 by ekorley           #+#    #+#             */
/*   Updated: 2016/09/28 10:04:29 by ekorley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	Turns a char into numerical digit, if possible.
*/

int		ft_ctoi(char letter)
{
	int		num;

	num = (int)(letter - '0');
	if (num > 9 || num < 0)
	{
		return (0);
	}
	return (num);
}
