/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse_fun.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/11 19:39:03 by rwang             #+#    #+#             */
/*   Updated: 2017/07/11 21:51:28 by rwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_at(t_list *begin_list, unsigned int nbr)
{
	while (begin_list && nbr > 0)
	{
		begin_list = begin_list->next;
		nbr--;
	}
	return (begin_list);
}

void	ft_list_reverse_fun(t_list *begin_list)
{
	t_list	*front;
	t_list	*end;
	void	*temp;
	int		f;
	int		e;

	front = begin_list;
	f = 0;
	e = 0;
	while (front)
	{
		front = front->next;
		e++;
	}
	front = begin_list;
	while (f < --e)
	{
		end = ft_list_at(begin_list, e);
		temp = end->data;
		end->data = front->data;
		front->data = temp;
		front = front->next;
		f++;
	}
}
