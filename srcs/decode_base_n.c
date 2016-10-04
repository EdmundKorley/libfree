/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   decode_base_n.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekorley <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/29 10:35:54 by ekorley           #+#    #+#             */
/*   Updated: 2016/09/29 13:26:08 by ekorley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	Takes a character array representation of 'bits' corresponding to
**	our character set for numerical digits across bases and converts that
**	array into a character array representation of a specified base.
**	Its important for this array to only have '0' and '1' inside of it.
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

static void		config_character_set(char **c_set)
{
	if (!*c_set)
	{
		*c_set = ft_memalloc(sizeof(char) * (70));
		ft_strcat(*c_set, "0123456789");
		ft_strcat(*c_set, "abcdefghijklmnopqrstuvwxyz");
		ft_strcat(*c_set, "ABCDEFGHIJKLMNOPQRSTUVWXYZ+/");
		ft_strcat(*c_set, "\0");
	}
}

static char		*bits_to_digit(char *buffer, char *c_set, int bit_read_width)
{
	char	*temp_hold;
	int		digit;
	int		i;
	int		len;

	temp_hold = (char *)ft_memalloc(sizeof(char) * bit_read_width);
	temp_hold = ft_strncpy(temp_hold, buffer, bit_read_width);
	temp_hold = ft_strrev(temp_hold);
	digit = 0;
	i = -1;
	len = (int)ft_strlen(temp_hold);
	while (++i < len)
		if (temp_hold[i] == '1')
			digit += (1 << i);
	ft_memdel((void **)&temp_hold);
	temp_hold = (char *)ft_memalloc(sizeof(char) * 2);
	if (!temp_hold)
		return (NULL);
	temp_hold = ft_strncpy(temp_hold, &c_set[digit], sizeof(char));
	return (temp_hold);
}

char			*decode_base_n(char *buffer, int base, char *c_set)
{
	char	*result;
	char	*digit;
	int		bit_read_width;
	int		len;
	int		i;

	config_character_set(&c_set);
	bit_read_width = find_power_of_2(base);
	len = ft_strlen(buffer);
	result = (char *)ft_memalloc(sizeof(char) * (len / bit_read_width) + 1);
	if (!result)
		return (NULL);
	i = 0;
	while (i < len)
	{
		digit = bits_to_digit(buffer + i, c_set, bit_read_width);
		result = ft_strcat(result, digit);
		ft_memdel((void **)&digit);
		i += bit_read_width;
	}
	result = ft_strcat(result, "\0");
	return (result);
}
