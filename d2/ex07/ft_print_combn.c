/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/28 21:46:50 by rwang             #+#    #+#             */
/*   Updated: 2017/06/29 13:09:11 by rwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	ft_print_combn(int n)
{
	int limit;
	int temp;
	int i;

	i = -1;
	limit = 1;
	temp = n;
	while (temp-- > 0)
		limit *= 10;
	while (i++ < limit - 1 && (temp = limit / 10) > 0)
	{
		while (temp > 1 && (i / temp) % 10 < (i / (temp / 10)) % 10)
			temp /= 10;
		if (temp == 1)
		{
			temp = limit / 10;
			while (temp > 0 && ft_putchar(i / temp % 10 + '0') == 0)
				temp /= 10;
			if (i / (limit / 10) < 10 - n)
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
		}
	}
}
