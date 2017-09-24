/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/03 11:44:26 by rwang             #+#    #+#             */
/*   Updated: 2017/07/04 21:43:51 by rwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

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
