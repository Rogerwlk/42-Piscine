/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/07 15:20:04 by rwang             #+#    #+#             */
/*   Updated: 2017/07/07 15:21:22 by rwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_max(int *tab, int len);

int main()
{
	int arr[]={2,8,6,4,7,0,1};
	printf("%d\n",ft_max(arr,7));
	return (0);
}