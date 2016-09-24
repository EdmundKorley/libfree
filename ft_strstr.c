/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekorley <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/24 06:10:06 by ekorley           #+#    #+#             */
/*   Updated: 2016/09/24 07:30:39 by ekorley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *big, const char *little)
{
	unsigned int	len;
	unsigned int	len_little;
	unsigned int	i;
	char			*location;

	if (little == NULL || big == NULL || !len_little)
		return ((char *)big);
	len = ft_strlen(big);
	while (i < len)
	{
		if (ft_strncmp((big + i), little, len_little) == 0)
			return (location = (char *)(big + i));
		i++;
	}
	return (NULL);
}
