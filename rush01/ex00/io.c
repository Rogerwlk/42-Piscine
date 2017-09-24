/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   io.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/09 18:51:31 by rwang             #+#    #+#             */
/*   Updated: 2017/07/09 20:48:12 by rwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "io.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	input(int puzzle[SIZE][SIZE], char **argv)
{
	int		i;
	int		j;

	i = 0;
	while (i < SIZE)
	{
		j = 0;
		while (j < SIZE)
		{
			if (argv[i + 1][j] == '.')
				puzzle[i][j] = 0;
			else
				puzzle[i][j] = (argv[i + 1][j] - '0');
			j++;
		}
		i++;
	}
}

void	output(int puzzle[SIZE][SIZE])
{
	int		i;
	int		j;

	i = 0;
	while (i < SIZE)
	{
		j = 0;
		while (j < SIZE)
		{
			ft_putchar(puzzle[i][j] + '0');
			if (j < 8)
				ft_putchar(' ');
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}
