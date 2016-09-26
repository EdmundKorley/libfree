/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekorley <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/24 19:58:55 by ekorley           #+#    #+#             */
/*   Updated: 2016/09/25 20:24:38 by ekorley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t		len;
	char		*buffer;

	len = ft_strlen(s1) + ft_strlen(s2) + 1;
	buffer = (char *)ft_memalloc(len);
	if (buffer == NULL)
		return (NULL);
	ft_strcat(buffer, s1);
	ft_strcat(buffer, s2);
	return (buffer);
}
