/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_spy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/07 11:43:22 by rwang             #+#    #+#             */
/*   Updated: 2017/07/07 12:05:18 by rwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		match_word(char *word, char *match);

int		main(int ac, char **av)
{
	int		i;

	i = 1;
	while (i < ac)
	{
		if (match_word(av[i], "president") || match_word(av[i], "attack")
				|| match_word(av[i], "powers"))
		{
			write(1, "Alert!!!\n", 9);
			return (0);
		}
		i++;
	}
	return (0);
}

int		match_word(char *word, char *match)
{
	while (*word && (*word == ' ' || *word == '\t' || *word == '\n'))
		word++;
	while (*word && *match)
	{
		if (*word != *match && (*word - *match) != ('a' - 'A') &&
				(*match - *word) != ('a' - 'A'))
			return (0);
		word++;
		match++;
	}
	while (*word && (*word == ' ' || *word == '\t' || *word == '\n'))
		word++;
	if (*word == 0 && *match == 0)
		return (1);
	else
		return (0);
}
