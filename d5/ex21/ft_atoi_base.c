/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/04 16:07:44 by rwang             #+#    #+#             */
/*   Updated: 2017/07/04 23:42:29 by rwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	find_base(char *b, char obj);
int	valid_base(char *b);
int	valid_str(char *s, char *b);
int	check_sign(char **str);

int	ft_atoi_base(char *str, char *base)
{
	int	result;
	int base_size;

	if (!valid_str(str, base) || !valid_base(base))
		return (0);
	result = 0;
	base_size = 0;
	while (base[base_size])
		base_size++;
	if (check_sign(&str))
		while (*str)
		{
			result = result * base_size + find_base(base, *str);
			str++;
		}
	else
		while (*str)
		{
			result = result * base_size - find_base(base, *str);
			str++;
		}
	return (result);
}

int	check_sign(char **str)
{
	int positive;

	positive = 1;
	while (**str == '\t' || **str == '\r' || **str == ' ' || **str == '\v'
			|| **str == '\n' || **str == '\f')
		(*str)++;
	if (**str == '-')
		positive = !positive;
	if (**str == '-' || **str == '+')
		(*str)++;
	return (positive);
}

int	find_base(char *b, char obj)
{
	int i;

	i = 0;
	while (b[i])
	{
		if (obj == b[i])
			return (i);
		i++;
	}
	return (i);
}

int	valid_str(char *s, char *b)
{
	char *copy;

	if (*s == 0 || *b == 0 || b[1] == 0)
		return (0);
	while (*s == '+' || *s == '-' || *s == ' ' || *s == '\t' || *s == '\n')
		s++;
	while (*s)
	{
		if (*s == '+' || *s == '-' || *s == '\t' || *s == '\n' || *s == ' '
				|| *s < ' ' || *s > '~')
			return (0);
		copy = b;
		while (*copy)
		{
			if (*copy == *s)
				break ;
			copy++;
		}
		if (*copy == 0)
			return (0);
		s++;
	}
	return (1);
}

int	valid_base(char *b)
{
	char *copy;

	while (*b)
	{
		if (*b == '+' || *b == '-' || *b == ' ' || *b == '\t' || *b == '\n'
				|| *b < ' ' || *b > '~')
			return (0);
		copy = b + 1;
		while (*copy)
		{
			if (*b == *copy)
				return (0);
			copy++;
		}
		b++;
	}
	return (1);
}
