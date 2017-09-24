/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   valid.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/09 18:50:43 by rwang             #+#    #+#             */
/*   Updated: 2017/07/09 20:55:18 by rwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "valid.h"

int		valid_input(char **argv)
{
	int i;
	int j;

	i = 1;
	while (i <= SIZE)
	{
		j = 0;
		while (argv[i][j])
		{
			if (argv[i][j] != '.' && !(argv[i][j] >= '1' && argv[i][j] <= '9'))
				return (0);
			j++;
		}
		if (j != SIZE)
			return (0);
		i++;
	}
	return (1);
}

int		valid_original_puzzle(int puzzle[SIZE][SIZE])
{
	int i;
	int j;
	int count;

	count = 0;
	i = 0;
	while (i < SIZE)
	{
		j = 0;
		while (j < SIZE)
		{
			if (puzzle[i][j] > 0 && conflict(puzzle, i, j))
				return (0);
			if (puzzle[i][j] > 0)
				count++;
			j++;
		}
		i++;
	}
	if (count < 17)
		return (0);
	return (1);
}

int		conflict_group(int puzzle[SIZE][SIZE], int row, int col)
{
	int i;
	int j;
	int temp1;
	int temp2;

	i = 0;
	temp1 = row / 3 * 3;
	temp2 = col / 3 * 3;
	while (i < 3)
	{
		j = 0;
		while (j < 3)
		{
			if (temp1 + i != row && temp2 + j != col
					&& puzzle[temp1 + i][temp2 + j] == puzzle[row][col])
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

int		conflict(int puzzle[SIZE][SIZE], int row, int col)
{
	int i;

	i = 0;
	while (i < SIZE)
	{
		if (i != row && puzzle[i][col] == puzzle[row][col])
			return (1);
		if (i != col && puzzle[row][i] == puzzle[row][col])
			return (1);
		i++;
	}
	if (conflict_group(puzzle, row, col))
		return (1);
	return (0);
}
