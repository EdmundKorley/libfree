/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_create_node.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekorley <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/26 08:21:39 by ekorley           #+#    #+#             */
/*   Updated: 2016/09/28 09:47:30 by ekorley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	Creates a binary tree node with its left and right branches
**	uninitialized.
*/

t_btree		*btree_create_node(void *item)
{
	t_btree		*node;

	node = malloc(sizeof(t_btree));
	if (node)
	{
		node = (t_btree *)node;
		node->item = item;
		node->left = NULL;
		node->right = NULL;
	}
	return (node);
}
