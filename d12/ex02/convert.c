/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/13 22:40:12 by rwang             #+#    #+#             */
/*   Updated: 2017/07/13 22:40:14 by rwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_tail.h"

int		illegal_offset(char *str)
{
	ft_puterror("tail: illegal offset -- ");
	ft_puterror(str);
	ft_puterror("\n");
	return (-2);
}

int		parse_option(char *str, int *num)
{
	if (!*str)
		return (0);
	else if (*str == '-' || (*str >= '0' && *str <= '9'))
	{
		*num = ft_atoi(str);
		if (*num == -1)
			return (illegal_offset(str));
		return (1);
	}
	else if (*str == '+')
	{
		*num = ft_atoi(str);
		if (*num == -1)
			return (illegal_offset(str));
		return (-1);
	}
	else
		return (illegal_offset(str));
}

int		ft_atoi(char *str)
{
	int result;

	if (*str == '-' || *str == '+')
		str++;
	if (!(*str >= '0' && *str <= '9'))
		return (-1);
	result = 0;
	while (*str >= '0' && *str <= '9')
	{
		result = result * 10 + (*str - '0');
		str++;
	}
	if (*str)
		return (-1);
	else
		return (result);
}
