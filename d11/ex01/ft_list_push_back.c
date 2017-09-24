/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/11 14:50:48 by rwang             #+#    #+#             */
/*   Updated: 2017/07/11 16:39:31 by rwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list	*copy;

	if (*begin_list == 0)
		*begin_list = ft_create_elem(data);
	else
	{
		copy = *begin_list;
		while (copy->next)
			copy = copy->next;
		copy->next = ft_create_elem(data);
	}
}
