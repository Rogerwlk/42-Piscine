/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sastantua.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/01 13:34:55 by rwang             #+#    #+#             */
/*   Updated: 2017/07/02 23:00:37 by rwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);
void	calculate_row_col(int *row, int *col, int size);
void	print_star(int row, int total_row, int size);
void	print_door(int row, int total_row, int size);
int		calculate_star(int row);
int		calculate_door(int row, int total_row, int size);

void	sastantua(int size)
{
	int row;
	int total_row;
	int total_col;
	int temp;

	if (size <= 0)
		return ;
	total_row = (5 + size) * size / 2;
	total_col = (2 + (size + 1) / 2) * ((size - 1) / 2);
	if (size % 2 == 0)
		total_col = total_col + (size / 2 + 1);
	total_col = (total_col + total_row) * 2 + 1;
	row = 1;
	while (row <= total_row)
	{
		temp = (total_col - calculate_star(row) - 2) / 2;
		while (temp-- > 0)
			ft_putchar(' ');
		ft_putchar('/');
		print_star(row, total_row, size);
		print_door(row, total_row, size);
		ft_putchar('\\');
		ft_putchar('\n');
		row++;
	}
}

void	print_star(int row, int total_row, int size)
{
	int num;

	num = calculate_star(row);
	num -= calculate_door(row, total_row, size);
	num /= 2;
	while (num > 0)
	{
		ft_putchar('*');
		num--;
	}
}

void	print_door(int row, int total_row, int size)
{
	int num;
	int temp;

	num = calculate_door(row, total_row, size);
	if (row < total_row + 1 - num)
	{
		temp = (num < calculate_star(row)) ? (num) : (calculate_star(row));
		while (temp-- > 0)
			ft_putchar('*');
	}
	else if (row == total_row - num / 2 && size >= 5)
	{
		temp = num - 2;
		while (temp-- > 0)
			ft_putchar('|');
		ft_putchar('$');
		ft_putchar('|');
	}
	else
		while (num-- > 0)
			ft_putchar('|');
	print_star(row, total_row, size);
}

int		calculate_star(int row)
{
	int num;
	int counter;
	int init;

	counter = 3;
	init = 4;
	num = row * 2 - 1;
	row -= counter;
	counter++;
	while (row > 0)
	{
		row -= counter;
		num += init;
		if (counter % 2 == 1)
			init += 2;
		counter++;
	}
	return (num);
}

int		calculate_door(int row, int total_row, int size)
{
	int num;

	if (size % 2 == 0)
		num = size - 1;
	else
		num = size;
	return (num);
}
