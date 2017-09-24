/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lib1.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/15 19:19:22 by rwang             #+#    #+#             */
/*   Updated: 2017/07/15 21:17:20 by rwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_lib.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_atoi(char **str)
{
	int result;
	int positive;

	while (**str == ' ')
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

void	ft_putnbr(int nb)
{
	int limit;
	int temp;

	limit = 1000000000;
	while (nb / limit == 0 && limit > 1)
		limit /= 10;
	if (nb < 0)
		ft_putchar('-');
	while (limit > 0)
	{
		temp = nb / limit % 10;
		if (temp < 0)
			ft_putchar((-temp) + '0');
		else
			ft_putchar(temp + '0');
		limit /= 10;
	}
}

void	ft_pushback_eval(t_eval **evals, int val, int prio, char sign)
{
	t_eval	*temp;
	t_eval	*copy;

	temp = malloc(sizeof(t_eval));
	temp->val = val;
	temp->prio = prio;
	temp->sign = sign;
	temp->next = 0;
	if (*evals == 0)
		*evals = temp;
	else
	{
		copy = *evals;
		while (copy->next)
			copy = copy->next;
		copy->next = temp;
	}
}
