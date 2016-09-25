/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekorley <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/23 17:54:42 by ekorley           #+#    #+#             */
/*   Updated: 2016/09/23 18:06:36 by ekorley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_isupper(int c)
{
	return ('A' <= c && c <= 'Z');
}

int		ft_islower(int c)
{
	return ('a' <= c && c <= 'z');
}

int		ft_isalpha(int c)
{
	return (ft_isupper(c) || ft_islower(c));
}
