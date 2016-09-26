/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekorley <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/24 19:56:57 by ekorley           #+#    #+#             */
/*   Updated: 2016/09/26 06:02:59 by ekorley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strtrim(char const *s)
{
	unsigned int	i;
	size_t			len;
	char			*ret;

	if (!s)
		return (0);
	i = 0;
	while (WS(s[i]))
		i++;
	len = ft_strlen(s) - 1;
	while (len > i && WS(s[len]))
		len--;
	if (len < i)
		return (ret = ft_strdup(""));
	return (ret = ft_strsub(s, i, len - (size_t)i + 1));
}
