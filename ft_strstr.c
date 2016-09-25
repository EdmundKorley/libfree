/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekorley <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/24 06:10:06 by ekorley           #+#    #+#             */
/*   Updated: 2016/09/24 09:56:34 by ekorley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *big, const char *little)
{
	unsigned int	len_big;
	unsigned int	len_little;
	unsigned int	i;
	char			*location;

	len_big = ft_strlen(big);
	len_little = ft_strlen(little);
	i = 0;
	if (little == NULL || big == NULL || !len_little)
		return ((char *)big);
	while (i < len_big)
	{
		if (ft_strncmp((big + i), little, len_little) == 0)
			return (location = (char *)(big + i));
		i++;
	}
	return (NULL);
}
