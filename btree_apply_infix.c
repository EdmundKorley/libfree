/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_apply_infix.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekorley <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/26 14:10:14 by ekorley           #+#    #+#             */
/*   Updated: 2016/09/28 09:44:26 by ekorley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	Traverses a binary tree, applying a callback function to each node's data,
**	in an infix traversal manner.
*/

void	btree_apply_infix(t_btree *root, void (*f)(void *))
{
	if (root)
	{
		btree_apply_infix(root->left, f);
		f(root->item);
		btree_apply_infix(root->right, f);
	}
}
