/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekorley <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/24 05:57:18 by ekorley           #+#    #+#             */
/*   Updated: 2016/09/25 20:11:29 by ekorley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t		size;
	char		*result;

	size = sizeof(char) * ft_strlen(s);
	result = (char *)ft_memchr(s, c, size);
	if (result == NULL)
		return (NULL);
	return (result);
}
