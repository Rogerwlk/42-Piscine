/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexdump.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/13 18:56:34 by rwang             #+#    #+#             */
/*   Updated: 2017/07/13 21:56:22 by rwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_hexdump.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		main(int argc, char **argv)
{
	int		flag;

	if (argc <= 1)
		return (1);
	flag = parse_option(argv[1]);
	if (flag == -1 || (flag == 1 && argc == 2))
		return (1);
	if (flag)
		output_files(argc - 2, argv + 2, flag);
	else
		output_files(argc - 1, argv + 1, flag);
	return (0);
}
