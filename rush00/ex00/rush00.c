/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/01 10:21:40 by rwang             #+#    #+#             */
/*   Updated: 2017/07/01 22:30:16 by rwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);
void	print_line(char front, char mid, char end, int x);

/* ****
 ** function rush() calls function print_line() to print out all the lines
 ** It has four parts:
 **
 ** 1. special case: if x <= 0 || y <= 0, then don't print anything
 **
 ** 2. print first line of the graph
 **
 ** 3. print all the middle lines of the graph (won't be printed if y <= 2)
 **   print y - 2 times
 **
 ** 4. print last line of the graph (won't be printed if y <= 1)
 * **** */

void	rush(int x, int y)
{
	int row;

	row = 0;
	if (x <= 0 || y <= 0)
		return ;
	print_line('o', '-', 'o', x);
	ft_putchar('\n');
	while (row < y - 2)
	{
		print_line('|', ' ', '|', x);
		ft_putchar('\n');
		row++;
	}
	if (y > 1)
	{
		print_line('o', '-', 'o', x);
		ft_putchar('\n');
	}
}

/* function print_line() print outs one line of the graph
 *
 * Input:
 *   char front: first char in the line
 *   char mid: char in the middle of the line
 *   char end: char in the end of the line
 *   int x: number of char in the line
 *
 * It has three parts:
 *
 * 1. print out the first char (if x > 0)
 *
 * 2. print out the chars in the middle (if x > 2):
 *   print out x - 2 times
 *
 * 3. print out the last char in the line (if x >= 2): */

void	print_line(char front, char mid, char end, int x)
{
	int col;

	if (x > 0)
		ft_putchar(front);
	col = 0;
	while (col < x - 2)
	{
		ft_putchar(mid);
		col++;
	}
	if (x > 1)
		ft_putchar(end);
}
