/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/03 12:22:14 by rwang             #+#    #+#             */
/*   Updated: 2017/07/04 22:38:25 by rwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_atoi(char *str);

int	main(void)
{
	char str1[] = "---2147483648";
	char str2[] = "\t2147483647";
	char str3[] = "\n-0";
	char str4[] = "+5.7463";
	char str5[] = "  \r46gsab";
	char str6[] = "fss";
	printf("%d\n", ft_atoi(str1));
	printf("%d\n", ft_atoi(str2));
	printf("%d\n", ft_atoi(str3));
	printf("%d\n", ft_atoi(str4));
	printf("%d\n", ft_atoi(str5));
	printf("%d\n", ft_atoi(str6));
	return (0);
}
