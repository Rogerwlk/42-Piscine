/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lib.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/15 16:42:07 by rwang             #+#    #+#             */
/*   Updated: 2017/07/15 21:48:32 by rwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LIB_H
# define FT_LIB_H

# include <unistd.h>
# include <stdlib.h>

typedef struct	s_eval
{
	int				val;
	int				prio;
	char			sign;
	struct s_eval	*next;
}				t_eval;

void			ft_putchar(char c);
int				ft_atoi(char **str);
void			ft_putnbr(int nb);
void			ft_pushback_eval(t_eval **vals, int val, int prio, char sign);

#endif
