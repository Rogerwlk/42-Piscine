/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cat.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/12 16:31:39 by rwang             #+#    #+#             */
/*   Updated: 2017/07/13 22:26:21 by rwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <errno.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>

#define BUF_SIZE 1024

void	ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}

void	ft_puterror(char *str)
{
	while (*str)
		write(2, str++, 1);
}

void	ft_error_type(int t, char *filename)
{
	if (t == 0)
	{
		ft_puterror("cat: ");
		ft_puterror(filename);
		ft_puterror(": No such file or directory\n");
	}
	else if (t == 1)
	{
		ft_puterror("cat: ");
		ft_puterror(filename);
		ft_puterror(": Is a directory\n");
	}
}

void	output_file(char *filename)
{
	int		fd;
	int		ret;
	char	buf[BUF_SIZE + 1];

	if ((fd = open(filename, O_RDONLY)) == -1)
	{
		ft_error_type(0, filename);
	}
	else
	{
		while ((ret = read(fd, buf, BUF_SIZE)))
		{
			if (errno == 21)
			{
				ft_error_type(1, filename);
				return ;
			}
			buf[ret] = 0;
			ft_putstr(buf);
		}
		close(fd);
	}
}

int		main(int argc, char **argv)
{
	int		i;

	if (argc < 2)
		return (1);
	i = 1;
	while (i < argc)
	{
		output_file(argv[i]);
		i++;
	}
	return (0);
}
