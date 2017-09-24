/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/09 14:20:32 by rwang             #+#    #+#             */
/*   Updated: 2017/07/09 20:43:23 by rwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

int		error(void)
{
	write(1, "Error\n", 6);
	return (1);
}

int		main(int argc, char **argv)
{
	int		puzzle[9][9];
	int		count;

	if (argc != 10 || !valid_input(argv))
		return (error());
	input(puzzle, argv);
	if (!valid_original_puzzle(puzzle))
		return (error());
	count = 0;
	if (unique(puzzle, 0, 0, &count) != 1)
		return (error());
	else
	{
		solve(puzzle, 0, 0);
		output(puzzle);
	}
	return (0);
}
