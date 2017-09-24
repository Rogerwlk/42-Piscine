/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/11 21:58:05 by rwang             #+#    #+#             */
/*   Updated: 2017/07/11 22:05:47 by rwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include "stdio.h"

int		ft_strcmp(char *s1, char *s2)
{
	while (*s1 == *s2)
	{
		if (*s1 == 0)
			return (*s1 - *s2);
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
t_list	*ft_list_push_params(int ac, char **av);
void	ft_list_clear(t_list **begin_list);
void	ft_sorted_list_insert(t_list **begin_list, void *data, int (*cmp)());

int		main(int argc, char **argv)
{
	t_list	*list = ft_list_push_params(argc, argv);
	ft_sorted_list_insert(&list, "ad", &ft_strcmp);
	while (list)
	{
		printf("%s ", list->data);
		list = list->next;
	}
	return (0);
}
