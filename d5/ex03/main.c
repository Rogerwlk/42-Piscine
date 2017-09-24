/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/03 12:42:09 by rwang             #+#    #+#             */
/*   Updated: 2017/07/03 13:02:36 by rwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcpy(char *dest, char *src);

int		main(void)
{
	char str1[10];
	char str2[] = "abcdef";
	char *addr;

	addr = ft_strcpy(str1, str2);
	printf("%p\n", str1);
	printf("%s\n", str1);
	printf("%p\n", str2);
	printf("%s\n", str2);
	printf("%p\n", addr);
	return (0);
}
