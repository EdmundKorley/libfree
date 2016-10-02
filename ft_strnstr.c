/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekorley <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/24 07:31:39 by ekorley           #+#    #+#             */
/*   Updated: 2016/10/01 18:16:36 by ekorley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	Returns the location of the substring little in big, if found. We do not
**	search past the NUL-terminator in the buffer big.
*/

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	unsigned int	len_big;
	unsigned int	len_little;
	unsigned int	i;
	char			*location;

	len_big = ft_strlen(big);
	len_little = ft_strlen(little);
	if (ft_strlen(little) == 0)
		return ((char *)big);
	i = 0;
	if (little == NULL || big == NULL)
		return ((char *)big);
	if (len_little > len)
		return (NULL);
	while (i < len && *(big + i))
	{
		if (ft_strncmp((big + i), little, len_little) == 0)
		{
			if (len_little + i > len)
				return (NULL);
			return (location = (char *)(big + i));
		}
		i++;
	}
	return (NULL);
}
