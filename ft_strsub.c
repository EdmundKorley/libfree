/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekorley <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/24 19:49:50 by ekorley           #+#    #+#             */
/*   Updated: 2016/09/29 15:54:06 by ekorley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	Returns a substring of size len, starting at the offset index of start.
*/

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*buffer;

	if (!s)
		return (NULL);
	buffer = (char *)ft_memalloc(len + 1);
	if (!buffer)
		return (NULL);
	buffer = (char *)ft_memcpy(buffer, s + start, len);
	return (buffer);
}
