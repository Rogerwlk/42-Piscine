/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/05 13:58:18 by rwang             #+#    #+#             */
/*   Updated: 2017/07/05 15:43:10 by rwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
char	*ft_strdup(char *src);

int		main()
{
	char *str1;
	char *str2;

	str1 = "abc";
	str2 = ft_strdup(str1);
	printf("%s", str2);
	free(str2);
	return (0);
}
