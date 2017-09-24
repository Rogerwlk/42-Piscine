/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/10 19:46:28 by rwang             #+#    #+#             */
/*   Updated: 2017/07/10 19:58:40 by rwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_count_if(char **tab, int (*f)(char*));

int is_empty(char *str)
{
	return (*str == 0);
}

int main()
{
	char **a;
	char *t1 = "abc";
	char *t2 = "";
	char *t3 = "";
	char *t4 = "de";

	a = (char**)malloc(sizeof(char*) * 5);
	a[0] = t1;
	a[1] = t2;
	a[2] = t3;
	a[3] = t4;
	a[4] = 0;
	printf("%d", ft_count_if(a, &is_empty));
	free(a);
	return (0);
}
