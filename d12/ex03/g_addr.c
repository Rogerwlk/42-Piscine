/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   g_addr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/13 21:49:24 by rwang             #+#    #+#             */
/*   Updated: 2017/07/13 23:02:58 by rwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_hexdump.h"

unsigned long int	g_addr = 0;

void	print_g_addr(void)
{
	char	str[8];
	int		copy;
	int		i;

	copy = g_addr;
	str[7] = 0;
	i = 6;
	while (i >= 0)
	{
		str[i] = hex(copy % 16);
		copy /= 16;
		i--;
	}
	ft_putstr(str);
}

void	add_g_addr(int num)
{
	g_addr += num;
}
