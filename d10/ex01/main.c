/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/10 19:29:33 by rwang             #+#    #+#             */
/*   Updated: 2017/07/10 19:33:57 by rwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_foreach(int *tab, int length, void(*f)(int));

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

int		main(void)
{
	int a[] = {1, 2, 3, 4, 5, 6};

	ft_foreach(a, 6, &ft_putnbr);
	return (0);
}
