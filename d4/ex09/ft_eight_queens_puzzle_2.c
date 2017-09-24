/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_eight_queens_puzzle_2.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/30 21:31:38 by rwang             #+#    #+#             */
/*   Updated: 2017/06/30 21:47:14 by rwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

struct	s_position
{
	int	x;
	int	y;
};

int		ft_putchar(char ch);
int		valid_pos(const int row, const int col, const struct s_position *s_pos);
void	fill(int row, struct s_position *s_pos);
int		collision(const int x1, const int y1, const int x2, const int y2);

void	ft_eight_queens_puzzle_2(void)
{
	struct s_position	s_pos[8];

	fill(0, s_pos);
}

void	fill(int row, struct s_position *s_pos)
{
	int col;
	int i;

	if (row == 8)
	{
		i = 0;
		while (i < 8)
		{
			ft_putchar(s_pos[i].y + '1');
			i++;
		}
		ft_putchar('\n');
		return ;
	}
	col = 0;
	while (col < 8)
	{
		if (valid_pos(row, col, s_pos))
		{
			s_pos[row].x = row;
			s_pos[row].y = col;
			fill(row + 1, s_pos);
		}
		col++;
	}
}

int		valid_pos(const int row, const int col, const struct s_position *s_pos)
{
	int idx;

	idx = 0;
	while (idx < row)
	{
		if (collision(s_pos[idx].x, s_pos[idx].y, row, col))
			return (0);
		idx++;
	}
	return (1);
}

int		collision(const int x1, const int y1, const int x2, const int y2)
{
	if (x1 == x2 || y1 == y2)
		return (1);
	if ((x1 - x2) == (y1 - y2))
		return (1);
	if ((x2 - x1) == (y1 - y2))
		return (1);
	return (0);
}
