/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/06 12:14:40 by rwang             #+#    #+#             */
/*   Updated: 2017/07/06 16:44:20 by rwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		valid(int argc, char **argv);
int		total_char(int argc, char **argv);

char	*ft_concat_params(int argc, char **argv)
{
	char	*str;
	int		pos;
	int		i;
	int		j;

	if (!valid(argc, argv))
		return (0);
	str = (char *)malloc(sizeof(char) * total_char(argc, argv));
	if (str == 0)
		return (0);
	i = 1;
	pos = 0;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j])
			str[pos++] = argv[i][j++];
		if (++i < argc)
			str[pos++] = '\n';
	}
	str[pos] = 0;
	return (str);
}

int		valid(int argc, char **argv)
{
	int i;

	if (argc == 0)
		return (0);
	i = 0;
	while (i < argc)
	{
		if (!argv[i])
			return (0);
		i++;
	}
	return (1);
}

int		total_char(int argc, char **argv)
{
	int count;
	int i;
	int j;

	i = 1;
	count = 0;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j++])
			count++;
		i++;
	}
	count += argc;
	return (count);
}
