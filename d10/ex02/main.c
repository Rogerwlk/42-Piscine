/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/10 19:40:09 by rwang             #+#    #+#             */
/*   Updated: 2017/07/10 19:42:25 by rwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	*ft_map(int *tab, int length, int (*f)(int));

int	increment(int a)
{
	return (a + 1);
}

int	main(void)
{
	int arr[] = {1, 2, 3, 4, 5};
	int *test;

	test = ft_map(arr, 5, &increment);
	for (int i = 0; i < 5; i++)
	{
		printf("%d", test[i]);
	}
	return (0);
}
