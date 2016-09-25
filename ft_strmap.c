/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekorley <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/24 19:32:50 by ekorley           #+#    #+#             */
/*   Updated: 2016/09/24 19:38:40 by ekorley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char		*buffer;
	size_t		i;

	buffer = ft_strdup(s);
	while (i < ft_strlen(s))
	{
		buffer[i] = f(s[i]);
		i++;
	}
	return (buffer);
}
