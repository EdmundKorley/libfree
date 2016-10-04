/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lenofint.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekorley <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/26 10:56:06 by ekorley           #+#    #+#             */
/*   Updated: 2016/09/26 11:00:22 by ekorley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	Calculates the number of digits in a integer.
*/

int		ft_lenofint(int num)
{
	int		len;

	if (num == -2147483648)
		return (11);
	len = 0;
	if (num == 0)
		return (1);
	if (num < 0)
	{
		num = -num;
		len++;
	}
	while (num)
	{
		num /= 10;
		len++;
	}
	return (len);
}
