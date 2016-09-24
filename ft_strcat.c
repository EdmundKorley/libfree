/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekorley <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/24 05:09:39 by ekorley           #+#    #+#             */
/*   Updated: 2016/09/24 09:32:59 by ekorley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *s1, const char *s2)
{
	void		*rest_of_s1;
	char		*result;

	rest_of_s1 = ft_memchr(s1, 0, 1000);
	result = ft_strcpy(rest_of_s1, s2);
	return (result);
}
