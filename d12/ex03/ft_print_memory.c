/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/04 18:53:58 by rwang             #+#    #+#             */
/*   Updated: 2017/07/13 23:10:21 by rwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_hexdump.h"

void	output_files(int ac, char **av, int flag)
{
	int		fd;
	int		i;

	i = 0;
	while (i < ac)
	{
		if ((fd = open(av[i], O_RDONLY)) == -1)
		{
			ft_no_file(av[i]);
			ft_bad_descriptor(av[i]);
		}
		else
		{
			judge_print(fd, flag);
			close(fd);
		}
		i++;
	}
}

void	judge_print(int fd, int flag)
{
	int		ret;
	int		same;
	char	buf[17];
	char	temp[17];

	same = 0;
	while ((ret = read(fd, buf, 16)))
	{
		if (ft_strcmp(temp, buf) == 0)
		{
			if (same == 0)
				ft_putstr("*\n");
			same = 1;
		}
		else
		{
			same = 0;
			buf[ret] = 0;
			ft_print_memory(buf, ret, flag);
		}
		ft_strcpy16(temp, buf);
		add_g_addr(ret);
	}
	print_g_addr();
	ft_putchar('\n');
}

void	ft_print_memory(char *buf, int ret, int flag)
{
	while (ret <= 16)
		buf[ret++] = 0;
	print_g_addr();
	if (flag)
		ft_putstr("  ");
	else
		write(1, " ", 1);
	print_hex_ascii(buf, flag);
	if (flag)
	{
		ft_putstr(" |");
		print_str(buf);
		write(1, "|", 1);
	}
	write(1, "\n", 1);
}

void	print_hex_ascii(char *addr, int flag)
{
	int count;

	count = 0;
	while (count < 16)
	{
		if (addr[count] == 0)
			ft_putstr("  ");
		else
		{
			ft_putchar(hex(addr[count] / 16));
			ft_putchar(hex(addr[count] % 16));
		}
		if (count < 15)
			write(1, " ", 1);
		if (flag && count % 8 == 7)
			write(1, " ", 1);
		count++;
	}
}

void	print_str(char *addr)
{
	int i;

	i = 0;
	while (addr[i] && i < 16)
	{
		if (!(addr[i] >= ' ' && addr[i] <= '~'))
			write(1, ".", 1);
		else
			write(1, addr + i, 1);
		i++;
	}
}
