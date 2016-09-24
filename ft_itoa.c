/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekorley <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/23 17:37:34 by ekorley           #+#    #+#             */
/*   Updated: 2016/09/24 05:02:43 by ekorley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrev(char *str)
{
	static	char	reversed_string[100];
	int				reverse_i;
	int				i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	reverse_i = i - 1;
	i = 0;
	while (reverse_i != -1)
	{
		reversed_string[i] = str[reverse_i];
		reverse_i--;
		i++;
	}
	reversed_string[i++] = '\0';
	return (reversed_string);
}

char	*ft_itoa(int n)
{
	char			*num;
	char			digit;
	short int		i;

	num = (char *)malloc(30);
	bzero(num, 30);
	i = 30;
	if (n < 0)
		num[i++] = '-';
	while (n > 0)
	{
		digit = (n % 10) + '0';
		num[i] = digit;
		n /= 10;
		i++;
	}
	num = ft_strrev(num);
	return (num);
}
