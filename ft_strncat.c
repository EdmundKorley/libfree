/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekorley <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/24 05:40:00 by ekorley           #+#    #+#             */
/*   Updated: 2016/10/01 07:35:06 by ekorley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	Contatenates n-bytes from src into dst. Returning a NUL-terminated
**	string.
*/

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	char		*buffer;
	size_t		i;

	buffer = s1;
	while (*buffer)
		buffer++;
	i = n;
	while (*s2 != '\0' && i > 0)
	{
		*buffer = *s2;
		buffer++;
		s2++;
		i--;
	}
	*buffer = '\0';
	return (s1);
}
