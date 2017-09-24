/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/10 19:46:28 by rwang             #+#    #+#             */
/*   Updated: 2017/07/10 19:54:34 by rwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_any(char **tab, int (*f)(char*));

int is_empty(char *str)
{
	return (*str == 0);
}

int main()
{
	char **a;
	char *t1 = "abc";
	char *t2 = "";

	a = (char**)malloc(sizeof(char*) * 3);
	a[0] = t1;
	a[1] = t2;
	a[2] = 0;
	printf("%d", ft_any(a, &is_empty));
	return (0);
}
