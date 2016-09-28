/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekorley <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/23 17:05:31 by ekorley           #+#    #+#             */
/*   Updated: 2016/09/28 10:03:33 by ekorley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	int		i;
	int		result;
	int		sign;

	i = 0;
	result = 0;
	sign = 1;
	while (str[i] != '\0')
	{
		if (str[i] == '-' && ft_isdigit(str[i + 1]))
			sign = -sign;
		else if ((str[i] > '9' || str[i] < '0') && !WS(str[i]))
			break ;
		else if (WS(str[i]))
		{
			i++;
			continue ;
		}
		else
			result = (result * 10) + ft_ctoi(str[i]);
		i++;
	}
	return (result * sign);
}
