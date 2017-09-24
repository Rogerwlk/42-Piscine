/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/05 21:30:42 by rwang             #+#    #+#             */
/*   Updated: 2017/07/06 17:12:36 by rwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		valid_base(char *base);
int		valid_nbr(char *nbr, char *base_from);
int		convert_from(char *nbr, char *base_from, int positive, int size);
char	*convert_to(int value, char *base_to, int size);

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		value;
	int		positive;
	int		f_size;
	int		t_size;

	positive = 1;
	if (!(f_size = valid_base(base_from))
			|| !(t_size = valid_base(base_to)))
		return (0);
	while (*nbr && (*nbr == '+' || *nbr == '-' || *nbr == '\n' || *nbr == '\t'
				|| *nbr == ' '))
		if (*nbr++ == '-')
			positive = !positive;
	if (!valid_nbr(nbr, base_from))
		return (0);
	value = convert_from(nbr, base_from, f_size, positive);
	return (convert_to(value, base_to, t_size));
}

int		valid_base(char *base)
{
	char	*temp;
	int		size;

	if (base[0] == '\0' || base[1] == '\0')
		return (0);
	size = 0;
	while (*base)
	{
		if (*base == '+' || *base == '-' || *base == '\n' || *base == ' '
				|| *base == '\t')
			return (0);
		temp = base + 1;
		while (*temp)
		{
			if (*base == *temp)
				return (0);
			temp++;
		}
		base++;
		size++;
	}
	return (size);
}

int		valid_nbr(char *nbr, char *base_from)
{
	char	*temp;

	if (*nbr == '\0')
		return (0);
	while (*nbr)
	{
		if (*nbr == '+' || *nbr == '-' || *nbr == '\n' || *nbr == ' '
				|| *nbr == '\t')
			return (0);
		temp = base_from;
		while (*temp)
		{
			if (*nbr == *temp)
				break ;
			temp++;
		}
		if (temp == 0)
			return (0);
		nbr++;
	}
	return (1);
}

int		convert_from(char *nbr, char *base_from, int base_size, int positive)
{
	int value;
	int temp;

	value = 0;
	if (positive)
		while (*nbr && *nbr != '.')
		{
			temp = 0;
			while (base_from[temp] && base_from[temp] != *nbr)
				temp++;
			value = value * base_size + temp;
			nbr++;
		}
	else
		while (*nbr && *nbr != '.')
		{
			temp = 0;
			while (base_from[temp] && base_from[temp] != *nbr)
				temp++;
			value = value * base_size - temp;
			nbr++;
		}
	return (value);
}

char	*convert_to(int value, char *base_to, int base_size)
{
	int		copy;
	int		temp;
	char	*result;

	copy = 1;
	temp = value;
	while ((temp = temp / base_size) != 0)
		copy++;
	if (value < 0)
		copy++;
	result = (char *)malloc(sizeof(char) * (copy + 1));
	if (value < 0)
		result[0] = '-';
	if (value == 0)
		result[0] = base_to[0];
	while (value != 0)
	{
		temp = value % base_size;
		if (temp < 0)
			result[--copy] = base_to[-temp];
		else
			result[--copy] = base_to[temp];
		value /= base_size;
	}
	return (result);
}
