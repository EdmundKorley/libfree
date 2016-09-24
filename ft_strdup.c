/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekorley <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/23 18:28:46 by ekorley           #+#    #+#             */
/*   Updated: 2016/09/23 18:44:20 by ekorley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char		*buffer;
	size_t		size;

	size = sizeof(char) * ft_strlen(s1);
	buffer = (char *)ft_memalloc(size);
	buffer = (char *)ft_memcpy(buffer, s1, size);
	return (buffer);
}
