/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekorley <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/24 19:40:01 by ekorley           #+#    #+#             */
/*   Updated: 2016/09/29 15:59:58 by ekorley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	Applies a callback function (which also takes the index of a character)
**	to each character in a NUL-terminated string,
**	returning a new manipulated string.
*/

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char		*buffer;
	size_t		i;

	if (!s)
		return (NULL);
	buffer = ft_strdup(s);
	if (buffer == NULL)
		return (NULL);
	i = 0;
	while (i < ft_strlen(s))
	{
		buffer[i] = f(i, s[i]);
		i++;
	}
	return (buffer);
}
