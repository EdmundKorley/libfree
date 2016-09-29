/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekorley <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/24 19:32:50 by ekorley           #+#    #+#             */
/*   Updated: 2016/09/29 16:09:32 by ekorley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	Applies a callack function to each character in a NUL-terminated string,
**	returning a new manipulated string.
*/

char	*ft_strmap(char const *s, char (*f)(char))
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
		buffer[i] = f(s[i]);
		i++;
	}
	return (buffer);
}
