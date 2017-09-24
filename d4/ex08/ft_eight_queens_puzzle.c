/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_eight_queens_puzzle.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/30 15:38:45 by rwang             #+#    #+#             */
/*   Updated: 2017/06/30 17:35:44 by rwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

struct	s_position
{
	int	x;
	int	y;
};

int		valid_pos(const int row, const int col, const struct s_position *s_pos);
void	fill(int row, int *count, struct s_position *s_pos);
int		collision(const int x1, const int y1, const int x2, const int y2);

int		ft_eight_queens_puzzle(void)
{
	int					count;
	struct s_position	s_pos[8];

	count = 0;
	fill(0, &count, s_pos);
	return (count);
}

void	fill(int row, int *count, struct s_position *s_pos)
{
	int col;

	if (row == 8)
	{
		(*count)++;
		return ;
	}
	col = 0;
	while (col < 8)
	{
		if (valid_pos(row, col, s_pos))
		{
			s_pos[row].x = row;
			s_pos[row].y = col;
			fill(row + 1, count, s_pos);
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
