/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekorley <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/24 06:05:30 by ekorley           #+#    #+#             */
/*   Updated: 2016/09/26 06:00:43 by ekorley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	Searches a string in reverse for the character represented by c.
*/

char	*ft_strrchr(const char *s, int c)
{
	int		size;

	size = ft_strlen((char *)s);
	while (0 != size && s[size] != (char)c)
		size--;
	if (s[size] == (char)c)
		return ((char *)&s[size]);
	return (NULL);
}
