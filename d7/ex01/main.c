/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/05 14:58:01 by rwang             #+#    #+#             */
/*   Updated: 2017/07/05 15:43:57 by rwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
int *ft_range(int, int);

int	main()
{
	int *r=ft_range(0,5);
	for(int i=0;i<5;i++)
		printf("%d",r[i]);
	free(r);
	return (0);
}