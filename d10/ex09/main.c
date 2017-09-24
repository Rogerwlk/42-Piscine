/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/10 22:09:03 by rwang             #+#    #+#             */
/*   Updated: 2017/07/11 14:03:27 by rwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"
#include "ft_opp.h"

int		main(int argc, char **argv)
{
	char	sign;
	int		val1;
	int		val2;

	if (argc != 4)
		return (1);
	sign = get_sign(argv[2]);
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
	int i;

	i = 0;
	while (i < 5)
	{
		if (s == g_opptab[i].op[0])
		{
			ft_putnbr(g_opptab[i].f(a, b));
			return ;
		}
		i++;
	}
	g_opptab[i].f(a, b);
}
