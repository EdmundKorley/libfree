/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekorley <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/23 18:38:28 by ekorley           #+#    #+#             */
/*   Updated: 2016/09/24 08:10:45 by ekorley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	Copies all of src, a NUL-terminated string, into the dst buffer.
*/

char	*ft_strcpy(char *dst, const char *src)
{
	size_t		size;

	size = sizeof(char) * (ft_strlen(src) + 1);
	dst = (char *)ft_memcpy(dst, src, size);
	return (dst);
}
