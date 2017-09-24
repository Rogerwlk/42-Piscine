/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/04 18:53:58 by rwang             #+#    #+#             */
/*   Updated: 2017/07/04 21:47:55 by rwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);
void	print_hex_addr(void *addr);
void	print_hex_ascii(char *addr);
char	hex(int dec);
void	print_str(char *addr);

void	*ft_print_memory(void *addr, unsigned int size)
{
	unsigned int	i;
	char			*copy;

	if (size == 0)
		return (addr);
	i = 0;
	copy = addr;
	while (i < size && copy[i] != 0)
	{
		print_hex_addr(addr + i);
		ft_putchar(':');
		ft_putchar(' ');
		print_hex_ascii(addr + i);
		ft_putchar(' ');
		print_str(addr + i);
		ft_putchar('\n');
		i += 16;
	}
	return (addr);
}

void	print_hex_addr(void *addr)
{
	unsigned long int	copy;

	copy = (unsigned long int)addr;
	while (copy > 0)
	{
		ft_putchar(hex(copy % 16));
		copy /= 16;
	}
}

void	print_hex_ascii(char *addr)
{
	int count;

	count = 0;
	while (count < 16)
	{
		if (addr[count] == 0)
		{
			ft_putchar(' ');
			ft_putchar(' ');
		}
		else
		{
			ft_putchar(hex(addr[count] / 16));
			ft_putchar(hex(addr[count] % 16));
		}
		if (count % 2 == 1)
			ft_putchar(' ');
		count++;
	}
}

char	hex(int dec)
{
	if (dec < 10)
		return (dec + '0');
	else
		return (dec - 10 + 'a');
}

void	print_str(char *addr)
{
	int i;

	i = 0;
	while (addr[i] && i < 16)
	{
		if (!(addr[i] >= ' ' && addr[i] <= '~'))
			ft_putchar('.');
		else
			ft_putchar(addr[i]);
		i++;
	}
}
