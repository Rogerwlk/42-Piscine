/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/14 22:16:47 by rwang             #+#    #+#             */
/*   Updated: 2017/07/14 23:27:00 by rwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_btree_rb.h"

void rb_insert(struct s_rb_node **root, void *data, int (*cmpf)(void *, void *));

int		compare(void *a, void *b)
{
	int	*i1=a;
	int	*i2=b;
	return (*i1-*i2);
}

int		main()
{
	t_rb_node	*root;

	int arr[] = {1,4,7,3,3,6,7,3,2,63,7,4,2,2,1,3,4,41};
	for(int i=0;i<18;i++)
	rb_insert(&root, arr+i, &compare);
	return (0);
}
