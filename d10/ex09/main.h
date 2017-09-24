/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/10 22:10:01 by rwang             #+#    #+#             */
/*   Updated: 2017/07/11 12:39:21 by rwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAIN_H
# define MAIN_H

# include "io.h"
# include "valid.h"
# include "calculate.h"

void			calculate(int a, char s, int b);
typedef struct	s_opp
{
	char	*op;
	int		(*f)(int, int);
}				t_opp;

#endif
