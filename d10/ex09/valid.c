/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   valid.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/10 21:23:40 by rwang             #+#    #+#             */
/*   Updated: 2017/07/11 12:41:21 by rwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "valid.h"

int		is_number(char *str)
{
	while (*str == '\r' || *str == '\f' || *str == ' ' || *str == '\t'
			|| *str == '\n' || *str == '\v')
		str++;
	return (*str >= '0' && *str <= '9');
}

int		is_sign(char c)
{
	return (c == '+' || c == '-' || c == '*' || c == '/' || c == '%');
}

int		valid(char s, int v2)
{
	if (s == '/' && v2 == 0)
	{
		write(1, "Stop : division by zero\n", 24);
		return (0);
	}
	else if (s == '%' && v2 == 0)
	{
		write(1, "Stop : modulo by zero\n", 22);
		return (0);
	}
	return (1);
}

int		ft_usage(int a, int b)
{
	(void)a;
	(void)b;
	write(1, "error : only [ - + * / % ] are accepted.", 40);
	return (0);
}
