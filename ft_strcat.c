/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekorley <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/24 05:09:39 by ekorley           #+#    #+#             */
/*   Updated: 2016/09/24 05:38:42 by ekorley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *s1, const char *s2)
{
	size_t		t;
	void		*rest_of_s1;
	char		*result;

	t = sizeof(char) * (ft_strlen(s2) + 1);
	rest_of_s1 = ft_memchr(s1, 0, 1000);
	result = (char *)ft_memcpy(rest_of_s1, s2, t);
	return (result);
}
