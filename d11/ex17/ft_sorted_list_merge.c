/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sorted_list_merge.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/11 20:05:56 by rwang             #+#    #+#             */
/*   Updated: 2017/07/11 23:21:01 by rwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_sorted_list_insert(t_list **begin_list, t_list *node, int (*cmp)())
{
	t_list	*copy;

	if (cmp((*begin_list)->data, node->data) > 0)
	{
		node->next = *begin_list;
		*begin_list = node;
	}
	else
	{
		copy = *begin_list;
		while (copy->next && cmp(copy->next->data, node->data) < 0)
			copy = copy->next;
		node->next = copy->next;
		copy->next = node;
	}
}

void	ft_sorted_list_merge(t_list **begin_list1, t_list *begin_list2,
		int (*cmp)())
{
	t_list *insert;

	if (*begin_list1 == 0)
	{
		*begin_list1 = begin_list2;
		return ;
	}
	if (begin_list2 == 0)
		return ;
	while (begin_list2->next)
	{
		insert = begin_list2;
		begin_list2 = begin_list2->next;
		ft_sorted_list_insert(begin_list1, insert, cmp);
	}
	ft_sorted_list_insert(begin_list1, begin_list2, cmp);
}
