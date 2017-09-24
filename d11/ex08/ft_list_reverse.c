/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/11 16:09:42 by rwang             #+#    #+#             */
/*   Updated: 2017/07/11 17:21:46 by rwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_reverse(t_list **begin_list)
{
	t_list *prev;
	t_list *current;

	prev = 0;
	if (*begin_list == 0)
		return ;
	while ((*begin_list)->next)
	{
		current = *begin_list;
		*begin_list = (*begin_list)->next;
		current->next = prev;
		prev = current;
	}
	(*begin_list)->next = prev;
}
