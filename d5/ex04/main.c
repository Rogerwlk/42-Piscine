/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/03 13:10:15 by rwang             #+#    #+#             */
/*   Updated: 2017/07/04 22:47:01 by rwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n);

int		main(void)
{
	for(int k=0;k<9;k++)
	{
		char str1[10] = "abcdef";
		char str2[] = "123";
		char str3[10] = "abcdef";

		ft_strncpy(str1, str2, k);
		for (int i=0;i<10;i++)
			printf("%c", str1[i]);
		printf("\n");
		ft_strncpy(str3, str2, k);
		for(int i=0;i<10;i++)
			printf("%c", str3[i]);
		printf("\n");
	}
	return (0);
}
