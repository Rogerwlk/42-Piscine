/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/10 20:15:14 by rwang             #+#    #+#             */
/*   Updated: 2017/07/10 20:17:57 by rwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_sort(int *tab, int length, int (*f)(int, int));

int diff(int a, int b)
{
	return (a - b);
}

int main()
{
	int arr[] = {1, 2, 3, 3, 3, 4};

	printf("%d", ft_is_sort(arr, 6, &diff));
	return (0);
}
