/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tail.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/12 19:20:58 by rwang             #+#    #+#             */
/*   Updated: 2017/07/13 22:58:10 by rwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_tail.h"

int		main(int argc, char **argv)
{
	int		flag;
	int		num;

	if (argc == 1)
		return (1);
	if (argv[1][0] != '-' || argv[1][1] != 'c')
	{
		illegal_offset(argv[1]);
		return (1);
	}
	if ((flag = parse_option(argv[1] + 2, &num)) == -2)
		return (1);
	else if (flag == 0)
	{
		if (argc == 3 || (flag = parse_option(argv[2], &num)) == -2)
			return (1);
		if (flag != 0)
			output_files(argc - 3, argv + 3, num, flag);
	}
	else
	{
		output_files(argc - 2, argv + 2, num, flag);
	}
	return (0);
}
