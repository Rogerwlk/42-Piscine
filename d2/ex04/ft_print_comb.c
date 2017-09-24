/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/28 12:04:58 by rwang             #+#    #+#             */
/*   Updated: 2017/06/30 14:10:44 by rwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	ft_print_comb(void)
{
	int digit_one;
	int digit_ten;
	int digit_hundred;
	int i;

	i = 0;
	while (i < 999)
	{
		digit_one = i % 10;
		digit_ten = i / 10 % 10;
		digit_hundred = i / 100;
		if (digit_hundred < digit_ten && digit_ten < digit_one)
		{
			ft_putchar(digit_hundred + '0');
			ft_putchar(digit_ten + '0');
			ft_putchar(digit_one + '0');
			if (i < 789)
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
		}
		i++;
	}
}
