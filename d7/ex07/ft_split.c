/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/06 10:19:13 by rwang             #+#    #+#             */
/*   Updated: 2017/07/06 10:32:48 by rwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		word_count(char *str, char *charset);
char	*word_create(char **str, char *charset);
int		separator(char c, char *charset);

char	**ft_split(char *str, char *charset)
{
	char	**arr;
	int		count;

	count = word_count(str, charset);
	arr = (char **)malloc(sizeof(char *) * (count + 1));
	if (arr == 0)
		return (0);
	count = 0;
	while (*str)
	{
		if (!separator(*str, charset))
		{
			arr[count++] = word_create(&str, charset);
			if (arr[count - 1] == 0)
				return (0);
		}
		str++;
	}
	arr[count] = 0;
	return (arr);
}

int		word_count(char *str, char *charset)
{
	int flag;
	int count;

	flag = 1;
	count = 0;
	while (*str)
	{
		if (!separator(*str, charset))
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

char	*word_create(char **str, char *charset)
{
	int		len;
	int		i;
	char	*word;

	len = 0;
	while ((*str)[len] && !separator((*str)[len], charset))
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

int		separator(char c, char *charset)
{
	while (*charset)
		if (*charset++ == c)
			return (1);
	return (0);
}
