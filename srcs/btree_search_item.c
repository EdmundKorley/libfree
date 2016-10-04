/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_search_item.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekorley <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/26 21:04:07 by ekorley           #+#    #+#             */
/*   Updated: 2016/09/28 09:42:44 by ekorley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	Search for a given item in a binary tree.
*/

void	*btree_search_item(t_btree *root, void *data_ref,
		int (*cmpf)(void*, void*))
{
	void	*result;

	result = NULL;
	if (!root)
		return (result);
	if (root->left)
		result = btree_search_item(root->left, data_ref, cmpf);
	if (cmpf(root->item, data_ref) == 0)
		return (root->item);
	if (!root && root->right)
		result = btree_search_item(root->right, data_ref, cmpf);
	return (result);
}
