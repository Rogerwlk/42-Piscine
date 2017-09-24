/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_sort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/11 19:25:42 by rwang             #+#    #+#             */
/*   Updated: 2017/07/11 20:45:08 by rwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_sort(t_list **begin_list, int (*cmp)())
{
	t_list	*i;
	t_list	*j;
	t_list	*min;
	void	*temp;

	i = *begin_list;
	while (i)
	{
		j = i->next;
		min = i;
		while (j)
		{
			if (cmp(min->data, j->data) > 0)
				min = j;
			j = j->next;
		}
		if (min != i)
		{
			temp = i->data;
			i->data = min->data;
			min->data = temp;
		}
		i = i->next;
	}
}
