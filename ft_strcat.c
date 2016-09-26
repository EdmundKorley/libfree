/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekorley <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/24 05:09:39 by ekorley           #+#    #+#             */
/*   Updated: 2016/09/26 07:21:56 by ekorley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *dst, const char *src)
{
	size_t		dst_len;
	char		*end_of_dst;

	dst_len = ft_strlen(dst);
	end_of_dst = dst + (sizeof(char) * dst_len);
	dst = (char *)ft_strcpy(dst + dst_len, src);
	return (dst - dst_len);
}
