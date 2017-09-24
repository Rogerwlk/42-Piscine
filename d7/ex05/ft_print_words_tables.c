/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_words_tables.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/05 20:33:43 by rwang             #+#    #+#             */
/*   Updated: 2017/07/05 21:15:42 by rwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

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
