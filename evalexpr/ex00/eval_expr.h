/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   eval_expr.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/15 16:45:47 by rwang             #+#    #+#             */
/*   Updated: 2017/07/15 21:01:41 by rwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EVAL_EXPR_H
# define EVAL_EXPR_H

# include "ft_lib.h"
# include <stdlib.h>

int		eval_expr(char *str);
int		calculate(int a, char sign, int b);
int		evaluate(t_eval *evals);
void	omit_separator(char **str, int *prio);

#endif
