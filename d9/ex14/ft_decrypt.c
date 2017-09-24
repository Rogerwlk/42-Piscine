/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_decrypt.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/07 14:48:46 by rwang             #+#    #+#             */
/*   Updated: 2017/07/07 15:53:08 by rwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_perso.h"

int		word_count(char *str)
{
	int count;

	count = 0;
	while (*str)
	{
		if (*str == '|')
			count++;
		str++;
	}
	return (count);
}

int		ft_atoi(char **str)
{
	int result;
	int positive;

	while (**str == '\r' || **str == '\f' || **str == ' ' || **str == '\t'
			|| **str == '\n' || **str == '\v')
		(*str)++;
	positive = 1;
	if (**str == '-')
		positive = !positive;
	if (**str == '-' || **str == '+')
		(*str)++;
	result = 0;
	if (positive)
		while (**str >= '0' && **str <= '9')
		{
			result = result * 10 + (**str - '0');
			(*str)++;
		}
	else
		while (**str >= '0' && **str <= '9')
		{
			result = result * 10 - (**str - '0');
			(*str)++;
		}
	return (result);
}

int		name_length(char *str)
{
	int	len;

	len = 0;
	while (str[len] && str[len] != ';')
		len++;
	return (len);
}

t_perso	**ft_decrypt(char *str)
{
	t_perso	**result;
	int		pos;
	char	*name;
	int		name_len;
	t_perso	*element;

	result = (t_perso **)malloc(sizeof(t_perso *) * (word_count(str) + 1));
	pos = 0;
	while (*str)
	{
		element = (t_perso *)malloc(sizeof(t_perso));
		element->age = ft_atoi(&str);
		str++;
		name = (char *)malloc(sizeof(char) * (name_length(str) + 1));
		name_len = 0;
		while (*str && *str != ';')
			name[name_len++] = *str++;
		name[name_len] = 0;
		element->name = name;
		result[pos++] = element;
		if (*str)
			str++;
	}
	result[pos] = 0;
	return (result);
}
