/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   eval_expr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/15 14:13:37 by rwang             #+#    #+#             */
/*   Updated: 2017/07/16 11:14:25 by rwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "eval_expr.h"

void	omit_separator(char **str, int *prio)
{
	while (**str == ' ' || **str == '(' || **str == ')')
	{
		if (**str == '(')
			*prio += 2;
		else if (**str == ')')
			*prio -= 2;
		(*str)++;
	}
}

int		calculate(int a, char sign, int b)
{
	int	result;

	result = 0;
	if (sign == '+')
		result = a + b;
	else if (sign == '-')
		result = a - b;
	else if (sign == '*')
		result = a * b;
	else if (sign == '/')
		result = a / b;
	else if (sign == '%')
		result = a % b;
	return (result);
}

int		evaluate(t_eval *evals)
{
	t_eval	*temp;
	t_eval	*max;
	int		result;

	while (evals && evals->next)
	{
		temp = evals->next;
		max = evals;
		while (temp)
		{
			if (max->prio < temp->prio)
				max = temp;
			temp = temp->next;
		}
		max->val = calculate(max->val, max->sign, max->next->val);
		max->sign = max->next->sign;
		max->prio = max->next->prio;
		temp = max->next;
		max->next = temp->next;
		free(temp);
	}
	result = evals->val;
	free(evals);
	return (result);
}

int		eval_expr(char *str)
{
	int		val;
	int		prio;
	char	sign;
	t_eval	*evals;

	evals = 0;
	prio = 0;
	omit_separator(&str, &prio);
	while (*str)
	{
		val = ft_atoi(&str);
		omit_separator(&str, &prio);
		if (*str)
		{
			sign = *str;
			str++;
			if (sign == '+' || sign == '-')
				ft_pushback_eval(&evals, val, prio, sign);
			else
				ft_pushback_eval(&evals, val, prio + 1, sign);
			omit_separator(&str, &prio);
		}
	}
	ft_pushback_eval(&evals, val, -1, 0);
	return (evaluate(evals));
}
