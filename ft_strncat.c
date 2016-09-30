/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekorley <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/24 05:40:00 by ekorley           #+#    #+#             */
/*   Updated: 2016/09/26 07:20:44 by ekorley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	Contatenates n-bytes from src into dst.
*/

char	*ft_strncat(char *dst, const char *src, size_t n)
{
	size_t		dst_len;
	char		*end_of_dst;

	dst_len = ft_strlen(dst);
	end_of_dst = dst + (sizeof(char) * dst_len);
	dst = (char *)ft_memcpy(dst + dst_len, src, n);
	return (dst - dst_len);
}
