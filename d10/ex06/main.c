/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/10 22:09:03 by rwang             #+#    #+#             */
/*   Updated: 2017/07/11 15:26:23 by rwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

int		main(int argc, char **argv)
{
	char	sign;
	int		val1;
	int		val2;

	if (argc != 4)
		return (1);
	sign = get_sign(argv[2]);
	if (!is_sign(sign))
	{
		write(1, "0\n", 2);
		return (1);
	}
	val1 = ft_atoi(argv[1]);
	val2 = ft_atoi(argv[3]);
	if (!valid(sign, val2))
		return (1);
	calculate(val1, sign, val2);
	ft_putchar('\n');
	return (0);
}

void	calculate(int a, char s, int b)
{
	int		(*f[5])(int, int);

	f[0] = add;
	f[1] = minus;
	f[2] = times;
	f[3] = div;
	f[4] = mod;
	if (s == '+')
		ft_putnbr((*f[0])(a, b));
	else if (s == '-')
		ft_putnbr((*f[1])(a, b));
	else if (s == '*')
		ft_putnbr((*f[2])(a, b));
	else if (s == '/')
		ft_putnbr((*f[3])(a, b));
	else if (s == '%')
		ft_putnbr((*f[4])(a, b));
	else
		write(1, "0", 1);
}
