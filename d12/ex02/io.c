/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   io.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/12 21:52:06 by rwang             #+#    #+#             */
/*   Updated: 2017/07/13 22:48:14 by rwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_tail.h"

void	ft_puterror(char *error)
{
	while (*error)
		write(2, error++, 1);
}

void	ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}

void	ft_putfilename(char *str)
{
	ft_putstr("==> ");
	ft_putstr(str);
	ft_putstr(" <==\n");
}

void	output_tail(int fd, int num, int flag, char *str)
{
	int		count;
	char	buf;

	if (flag == 1)
	{
		count = 0;
		while (read(fd, &buf, 1))
			count++;
		count -= num;
		close(fd);
		fd = open(str, O_RDONLY);
	}
	else
		count = num;
	while (count-- > 0)
		read(fd, &buf, 1);
	while (read(fd, &buf, 1))
		write(1, &buf, 1);
}

void	output_files(int ac, char **av, int num, int flag)
{
	int		fd;
	int		i;
	int		filename;

	filename = (ac > 1) ? 1 : 0;
	i = 0;
	while (i < ac)
	{
		if ((fd = open(av[i], O_RDONLY)) == -1)
			ft_no_file(av[i]);
		else
		{
			if (filename)
			{
				if (i > 0)
					write(1, "\n", 1);
				ft_putfilename(av[i]);
			}
			output_tail(fd, num, flag, av[i]);
			close(fd);
		}
		i++;
	}
}
