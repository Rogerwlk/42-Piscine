/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_params.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/11 15:28:36 by rwang             #+#    #+#             */
/*   Updated: 2017/07/11 20:57:52 by rwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_push_params(int ac, char **av)
{
	t_list	*list;
	t_list	*temp;
	int		i;

	list = 0;
	i = 1;
	while (i < ac)
	{
		temp = ft_create_elem(av[i]);
		if (list == 0)
			list = temp;
		else
		{
			temp->next = list;
			list = temp;
		}
		i++;
	}
	return (list);
}
