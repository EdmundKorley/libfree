/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekorley <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/24 19:56:57 by ekorley           #+#    #+#             */
/*   Updated: 2016/09/24 20:17:17 by ekorley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_nonwsi(char const *s)
{
	size_t		i;

	i = 0;
	while (i < ft_strlen(s))
	{
		if (!WS(s[i]))
			return (i);
		i++;
	}
	return (-1);
}

size_t		ft_nonwsri(char const *s)
{
	size_t		i;

	i = ft_strlen(s) - 1;
	while (i > -1)
	{
		if (!WS(s[i]))
			return (i);
		i--;
	}
	return (-1);
}

char		*ft_strtrim(char const *s)
{
	size_t		start;
	size_t		end;
	char		*buffer;

	start = ft_nonwsi(s);
	end = ft_nonwsri(s);
	buffer = (char *)ft_memalloc((end - start) + 1);
	if (buffer == NULL)
		return (NULL);
	while (start <= end && (start != -1 || end != -1))
	{
		buffer[start] = s[start];
		start++;
	}
	if (start == -1 || end != -1)
		return (NULL);
	return (buffer);
}
