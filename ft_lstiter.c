/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekorley <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/25 11:55:00 by ekorley           #+#    #+#             */
/*   Updated: 2016/09/25 11:58:36 by ekorley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	Iterates through a linked list and applies a callback function f to
**	each node in that linked list.
*/

void	ft_lstiter(t_list *lst, void (*f)(t_list *elem))
{
	t_list		*node;

	node = lst;
	if (lst == NULL)
		return ;
	while (node)
	{
		f(node);
		node = node->next;
	}
}
