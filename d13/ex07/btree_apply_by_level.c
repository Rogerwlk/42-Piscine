/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_apply_by_level.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/14 14:52:17 by rwang             #+#    #+#             */
/*   Updated: 2017/07/14 16:18:21 by rwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

int		g_current_level = 0;
int		g_is_first_elem = 1;

void	btree_apply_by_level(t_btree *root,
		void (*applyf)(void *item, int current_level, int is_first_elem))
{
	if (root == 0)
	{
		g_current_level--;
		return ;
	}
	applyf(root->item, g_current_level, g_is_first_elem);
	g_current_level++;
	btree_apply_by_level(root->left, applyf);
	if (root->left)
		g_is_first_elem = 0;
	g_current_level++;
	btree_apply_by_level(root->right, applyf);
	g_current_level--;
}
