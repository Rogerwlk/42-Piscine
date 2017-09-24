/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/11 21:58:05 by rwang             #+#    #+#             */
/*   Updated: 2017/07/11 23:20:46 by rwang            ###   ########.fr       */
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
void	ft_sorted_list_merge(t_list **begin_list, t_list *begin_list2, int (*cmp)());

int		main(int argc, char **argv)
{
	char *av[5];
	av[0]="xxx";
	av[1]="4";
	av[2]="5";
	av[3]="6";
	t_list	*a = ft_list_push_params(argc, argv);
	t_list	*b = ft_list_push_params(argc, argv);
	t_list	*list1 = a;
	t_list	*list2 = b;
	while (list1)
	{
		printf("%s ", list1->data);
		list1 = list1->next;
	}
	printf("\n");
	while (list2)
	{
		printf("%s ", list2->data);
		list2 = list2->next;
	}
	printf("\n");
	ft_sorted_list_merge(&a, b, &ft_strcmp);
	list1 = a;
	list2 = b;
	while (list1)
	{
		printf("%s ", list1->data);
		list1 = list1->next;
	}
	printf("\n");
	ft_list_clear(&a);
	return (0);
}
