/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/28 15:29:05 by rwang             #+#    #+#             */
/*   Updated: 2017/06/30 14:11:26 by rwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	ft_putnbr(int nb)
{
	long long limit;

	limit = 1000000000000;
	if (nb < 0)
	{
		ft_putchar('-');
	}
	while (limit > 1 && nb / limit == 0)
	{
		limit /= 10;
	}
	while (limit > 0)
	{
		if (nb < 0)
			ft_putchar(-(nb / limit % 10) + '0');
		else
			ft_putchar(nb / limit % 10 + '0');
		limit /= 10;
	}
}
