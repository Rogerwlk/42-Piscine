/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_level_count.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/14 14:42:02 by rwang             #+#    #+#             */
/*   Updated: 2017/07/14 14:47:37 by rwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

int		max(int a, int b)
{
	return ((a > b) ? a : b);
}

int		btree_level_count(t_btree *root)
{
	if (root == 0)
		return (0);
	return (max(1 + btree_level_count(root->left),
			1 + btree_level_count(root->right)));
}
