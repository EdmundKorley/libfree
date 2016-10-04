/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_apply_prefix.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekorley <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/26 10:12:05 by ekorley           #+#    #+#             */
/*   Updated: 2016/09/28 09:44:45 by ekorley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	Apply a callback function to each item in a binary tree,
**	in a prefix traversal fashion.
*/

void	btree_apply_prefix(t_btree *root, void (*applyf)(void *))
{
	if (root == (void *)0)
	{
		return ;
	}
	applyf(root->item);
	btree_apply_prefix(root->left, applyf);
	btree_apply_prefix(root->right, applyf);
}
