/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   io.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/13 21:19:58 by rwang             #+#    #+#             */
/*   Updated: 2017/07/13 21:25:56 by rwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_hexdump.h"

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

void	ft_illegal_option(char *str)
{
	ft_puterror("hexdump: illegal option -- ");
	ft_puterror(str);
	ft_puterror("\n");
}

void	ft_no_file(char *str)
{
	ft_puterror("hexdump: ");
	ft_puterror(str);
	ft_puterror(": No such file or directory\n");
}

void	ft_bad_descriptor(char *str)
{
	ft_puterror("hexdump: ");
	ft_puterror(str);
	ft_puterror(": Bad file descriptor\n");
}
