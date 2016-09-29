/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   encode_base_n.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekorley <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/29 05:50:26 by ekorley           #+#    #+#             */
/*   Updated: 2016/09/29 10:05:49 by ekorley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	Encodes a base-n input, where n is a power of 2,
**	into a byte-array representation based on the character set.
*/

static int		find_power_of_2(int base)
{
	int		i;

	i = 0;
	while (i++ < base)
		if ((2 << i) == base)
			return (i + 1);
	return (0);
}

static char		*base_n_to_bits(char digit, char *c_set, int bit_width)
{
	char	*bits;
	int		i;
	int		j;

	i = -1;
	while (++i < ft_strlen(c_set))
		if (digit == c_set[i])
			break ;
	bits = (char *)ft_memalloc((bit_width + 1) * sizeof(char));
	j = 0;
	while (j < bit_width)
	{
		bits[j] = (i % 2) + '0';
		i /= 2;
		j++;
	}
	bits = ft_strrev(bits);
	return (bits);
}

char			*encode_base_n(char *buffer, int base, char *c_set)
{
	char	*result;
	char	*word;
	int		bit_width;
	int		len;
	int		i;

	if (!c_set)
		c_set = "0123456789abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ+/";
	bit_width = find_power_of_2(base);
	len = (int)ft_strlen(buffer);
	result = (char *)ft_memalloc(sizeof(char) * ((bit_width * len) + 1));
	if (!result)
		return (NULL);
	i = 0;
	while (i < len)
	{
		word = base_n_to_bits(buffer[i], c_set, bit_width);
		result = ft_strcat(result, word);
		ft_memdel((void **)&word);
		i++;
	}
	result = ft_strcat(result, "\0");
	return (result);
}
