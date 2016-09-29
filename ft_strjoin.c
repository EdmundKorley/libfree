/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekorley <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/24 19:58:55 by ekorley           #+#    #+#             */
/*   Updated: 2016/09/29 16:08:37 by ekorley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	Merges two NUL-terminated strings into a new allocated string.
*/

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t		len;
	char		*buffer;

	if (!s1 || !s2)
		return (NULL);
	len = ft_strlen(s1) + ft_strlen(s2) + 1;
	buffer = ft_strnew(len);
	if (buffer == NULL)
		return (NULL);
	ft_strcat(buffer, s1);
	ft_strcat(buffer, s2);
	return (buffer);
}
