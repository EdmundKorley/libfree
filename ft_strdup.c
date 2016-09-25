/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekorley <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/23 18:28:46 by ekorley           #+#    #+#             */
/*   Updated: 2016/09/24 07:58:55 by ekorley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *string)
{
	char		*buffer;
	size_t		size;

	size = sizeof(char) * (ft_strlen(string) + 1);
	buffer = (char *)ft_memalloc(size);
	buffer = (char *)ft_memcpy(buffer, string, size);
	return (buffer);
}
