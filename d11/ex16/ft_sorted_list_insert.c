/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sorted_list_insert.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/11 19:44:37 by rwang             #+#    #+#             */
/*   Updated: 2017/07/11 20:00:09 by rwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_sorted_list_insert(t_list **begin_list, void *data, int (*cmp)())
{
	t_list	*new;
	t_list	*copy;

	new = ft_create_elem(data);
	if (*begin_list == 0)
		*begin_list = new;
	else if (cmp((*begin_list)->data, data) > 0)
	{
		new->next = *begin_list;
		*begin_list = new;
	}
	else
	{
		copy = *begin_list;
		while (copy->next && cmp(copy->next->data, data) < 0)
			copy = copy->next;
		new->next = copy->next;
		copy->next = new;
	}
}
