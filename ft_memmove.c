/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekorley <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/22 16:32:37 by ekorley           #+#    #+#             */
/*   Updated: 2016/09/26 11:31:12 by ekorley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*temp;

	temp = (unsigned char *)malloc(n);
	if (temp == NULL)
		return (NULL);
	ft_memcpy(temp, src, n);
	ft_memcpy(dest, temp, n);
	free(temp);
	temp = NULL;
	return (dest);
}
