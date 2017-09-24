/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/13 18:58:54 by rwang             #+#    #+#             */
/*   Updated: 2017/07/13 22:00:13 by rwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_hexdump.h"

int		ft_strcmp(char *s1, char *s2)
{
	while (*s1 == *s2)
	{
		if (*s1 == 0)
			return (*s1 - *s2);
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

void	ft_strcpy16(char *s1, char *s2)
{
	int i;

	i = 0;
	while (i <= 16)
	{
		s1[i] = s2[i];
		i++;
	}
}

int		parse_option(char *str)
{
	char	temp[2];

	if (*str == '-' && str[1] == 'C' && str[2] == 0)
		return (1);
	else if (*str == '-' && str[1] == 'C' && str[2] != 0)
	{
		temp[0] = str[2];
		temp[1] = 0;
		ft_illegal_option(temp);
		return (-1);
	}
	else if (*str == '-' && str[1] != 'C')
	{
		temp[0] = str[1];
		temp[1] = 0;
		ft_illegal_option(temp);
		return (-1);
	}
	return (0);
}

char	hex(int dec)
{
	if (dec < 10)
		return (dec + '0');
	else
		return (dec - 10 + 'a');
}
