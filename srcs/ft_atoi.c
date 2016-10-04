/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekorley <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/23 17:05:31 by ekorley           #+#    #+#             */
/*   Updated: 2016/09/29 16:58:28 by ekorley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	Converts a string into an int. Ignoring leading whitespaces and
**	trailing non-numeric characters.
*/

int			ft_atoi(const char *str)
{
	int		sign;
	char	*buffer;
	int		result;

	sign = 1;
	result = 0;
	buffer = (char *)str;
	while (WS(*buffer))
		buffer++;
	if (*buffer == '-')
		sign = -1;
	if ((*buffer == '+') || (*buffer == '-'))
		buffer += 1;
	while (ft_isdigit(*buffer))
	{
		result = result * 10 + (*buffer - '0');
		buffer++;
	}
	result *= sign;
	return (result);
}
