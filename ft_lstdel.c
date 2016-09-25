/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nodedel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekorley <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/25 11:31:05 by ekorley           #+#    #+#             */
/*   Updated: 2016/09/25 11:45:37 by ekorley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void(*del)(void *, size_t))
{
	t_list		*node;
	t_list		*next_node;

	node = *alst;
	while (node)
	{
		next_node = node->next;
		del(node->content, node->content_size);
		free(node);
		node = next_node;
	}
	*alst = NULL;
}
