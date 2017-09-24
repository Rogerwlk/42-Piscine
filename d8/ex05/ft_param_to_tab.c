/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_param_to_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/07 01:27:04 by rwang             #+#    #+#             */
/*   Updated: 2017/07/07 22:59:55 by rwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_par.h"

char		*ft_strdup(char *src)
{
	int		len;
	char	*copy;

	len = 0;
	while (src[len])
		len++;
	if (!(copy = (char *)malloc(sizeof(*src) * (len + 1))))
		return (0);
	copy[len] = 0;
	len--;
	while (len >= 0)
	{
		copy[len] = src[len];
		len--;
	}
	return (copy);
}

int			ft_strlen(char *str)
{
	int len;

	len = 0;
	while (*str != '\0')
	{
		str++;
		len++;
	}
	return (len);
}

t_stock_par	*ft_param_to_tab(int ac, char **av)
{
	t_stock_par	*result;
	int			i;

	result = (t_stock_par*)malloc(sizeof(t_stock_par) * (ac + 1));
	i = 0;
	while (i < ac)
	{
		result[i].size_param = ft_strlen(av[i]);
		result[i].str = av[i];
		result[i].copy = ft_strdup(av[i]);
		result[i].tab = ft_split_whitespaces(av[i]);
		i++;
	}
	result[ac].size_param = 0;
	result[ac].str = 0;
	result[ac].copy = 0;
	result[ac].tab = 0;
	return (result);
}
