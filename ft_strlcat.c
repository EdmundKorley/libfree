/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekorley <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/24 05:45:50 by ekorley           #+#    #+#             */
/*   Updated: 2016/09/24 05:52:08 by ekorley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcat(char *dst, const char *src, size_t size)
{
	void		*rest_of_s1;
	char		*result;
	size_t		len;

	rest_of_s1 = ft_memchr(dst, 0, size);
	len = sizeof(char) * ft_strlen(src);
	result = (char *)ft_memcpy(rest_of_s1, src, len);
	ft_strcat(result, "\0");
	return (ft_strlen(dst));
}
