/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekorley <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/25 08:49:34 by ekorley           #+#    #+#             */
/*   Updated: 2016/09/25 12:05:57 by ekorley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_nodedelone(t_list **alst, void (*del)(void *, size_t))
{
	del(&((*alst)->content), (*alst)->content_size);
	free(*alst);
	*alst = NULL;
}
