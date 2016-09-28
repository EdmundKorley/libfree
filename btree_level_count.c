/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_level_count.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekorley <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/26 23:13:03 by ekorley           #+#    #+#             */
/*   Updated: 2016/09/28 09:51:21 by ekorley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	Counts the number of levels in a binary tree.
*/

int		btree_level_count(t_btree *root)
{
	if (!root)
		return (0);
	else
		return (ft_maxint(btree_level_count(root->left),
				btree_level_count(root->right)) + 1);
}
