/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/05 19:04:49 by rwang             #+#    #+#             */
/*   Updated: 2017/07/05 23:17:21 by rwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		word_count(char *str);
char	*word_create(char **str);

char	**ft_split_whitespaces(char *str)
{
	char	**arr;
	int		count;

	count = word_count(str);
	arr = (char **)malloc(sizeof(char *) * (count + 1));
	if (arr == 0)
		return (0);
	count = 0;
	while (*str)
	{
		if (*str != ' ' && *str != '\t' && *str != '\n')
		{
			arr[count++] = word_create(&str);
			if (arr[count - 1] == 0)
				return (0);
		}
		str++;
	}
	arr[count] = 0;
	return (arr);
}

int		word_count(char *str)
{
	int flag;
	int count;

	flag = 1;
	count = 0;
	while (*str)
	{
		if (*str != ' ' && *str != '\t' && *str != '\n')
		{
			if (flag)
			{
				count++;
				flag = 0;
			}
		}
		else
			flag = 1;
		str++;
	}
	if (flag == 0)
		count++;
	return (count);
}

char	*word_create(char **str)
{
	int		len;
	int		i;
	char	*word;

	len = 0;
	while ((*str)[len] && (*str)[len] != ' ' && (*str)[len] != '\t' &&
			(*str)[len] != '\n')
		len++;
	word = (char *)malloc(sizeof(char) * (len + 1));
	if (word == 0)
		return (0);
	i = 0;
	while (i < len)
	{
		word[i++] = **str;
		(*str)++;
	}
	(*str)--;
	word[i] = 0;
	return (word);
}
