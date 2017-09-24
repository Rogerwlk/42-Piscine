/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/07 23:05:25 by rwang             #+#    #+#             */
/*   Updated: 2017/07/07 23:25:35 by rwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_par.h"

void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		ft_putchar(*str);
		str++;
	}
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

void	ft_print_words_tables(char **tab)
{
	char *word;

	while (*tab)
	{
		word = *tab;
		while (*word)
		{
			ft_putchar(*word);
			word++;
		}
		ft_putchar('\n');
		tab++;
	}
}

void	ft_show_tab(t_stock_par *par)
{
	while (par->str)
	{
		ft_putstr(par->str);
		ft_putchar('\n');
		ft_putnbr(par->size_param);
		ft_putchar('\n');
		ft_print_words_tables(par->tab);
		par++;
	}
}
