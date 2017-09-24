/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/09 19:11:05 by rwang             #+#    #+#             */
/*   Updated: 2017/07/09 20:49:25 by rwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "solve.h"

int		solve(int puzzle[SIZE][SIZE], int row, int col)
{
	int i;

	if (row == SIZE)
		return (1);
	if (puzzle[row][col] > 0 && !conflict(puzzle, row, col))
	{
		if (solve(puzzle, row + (col + 1) / 9, (col + 1) % 9))
			return (1);
	}
	if (puzzle[row][col] == 0)
	{
		i = 1;
		while (i <= SIZE)
		{
			puzzle[row][col] = i++;
			if (!conflict(puzzle, row, col))
			{
				if (solve(puzzle, row + (col + 1) / 9, (col + 1) % 9))
					return (1);
			}
		}
		puzzle[row][col] = 0;
	}
	return (0);
}

int		unique(int puzzle[SIZE][SIZE], int row, int col, int *count)
{
	int i;

	if (*count > 1)
		return (*count);
	if (row == SIZE)
		return (++(*count));
	else if (puzzle[row][col] > 0 && !conflict(puzzle, row, col))
		unique(puzzle, row + (col + 1) / 9, (col + 1) % 9, count);
	else if (puzzle[row][col] == 0)
	{
		i = 1;
		while (i <= SIZE)
		{
			puzzle[row][col] = i++;
			if (!conflict(puzzle, row, col))
				unique(puzzle, (row + (col + 1) / 9), (col + 1) % 9, count);
		}
		puzzle[row][col] = 0;
	}
	return (*count);
}
