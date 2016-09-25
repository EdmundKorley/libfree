/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekorley <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/23 17:05:31 by ekorley           #+#    #+#             */
/*   Updated: 2016/09/25 14:17:38 by ekorley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
		if (str[i] == '-')
			sign = -1;
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
