/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   io.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/10 21:07:05 by rwang             #+#    #+#             */
/*   Updated: 2017/07/10 23:02:47 by rwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "io.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	int limit;
	int temp;

	limit = 1000000000;
	while (nb / limit == 0 && limit > 1)
		limit /= 10;
	if (nb < 0)
		ft_putchar('-');
	while (limit > 0)
	{
		temp = nb / limit % 10;
		if (temp < 0)
			ft_putchar((-temp) + '0');
		else
			ft_putchar(temp + '0');
		limit /= 10;
	}
}

int		ft_atoi(char *str)
{
	int result;
	int positive;

	while (*str == '\r' || *str == '\f' || *str == ' ' || *str == '\t'
			|| *str == '\n' || *str == '\v')
		str++;
	positive = 1;
	while (*str == '+' || *str == '-')
		if (*str++ == '-')
			positive = !positive;
	result = 0;
	if (positive)
		while (*str >= '0' && *str <= '9')
		{
			result = result * 10 + (*str - '0');
			str++;
		}
	else
		while (*str >= '0' && *str <= '9')
		{
			result = result * 10 - (*str - '0');
			str++;
		}
	return (result);
}

char	get_sign(char *str)
{
	char	sign;

	while (*str == '\r' || *str == '\f' || *str == ' ' || *str == '\t'
			|| *str == '\n' || *str == '\v')
		str++;
	sign = *str;
	if (*str)
		str++;
	while (*str == '\r' || *str == '\f' || *str == ' ' || *str == '\t'
			|| *str == '\n' || *str == '\v')
		str++;
	if (*str == 0)
		return (sign);
	else
		return ('0');
}
