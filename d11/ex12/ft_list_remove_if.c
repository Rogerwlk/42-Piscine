/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_if.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/11 16:55:41 by rwang             #+#    #+#             */
/*   Updated: 2017/07/11 20:48:45 by rwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

void	ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
	t_list	*prev;
	t_list	*current;

	if (*begin_list == 0)
		return ;
	while (*begin_list && cmp((*begin_list)->data, data_ref) == 0)
	{
		current = *begin_list;
		*begin_list = (*begin_list)->next;
		free(current);
	}
	prev = 0;
	current = *begin_list;
	while (current)
		if (cmp(current->data, data_ref) == 0)
		{
			prev->next = current->next;
			free(current);
			current = prev->next;
		}
		else
		{
			prev = current;
			current = current->next;
		}
}
