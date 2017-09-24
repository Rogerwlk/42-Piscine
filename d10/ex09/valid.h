/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   valid.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/10 21:21:02 by rwang             #+#    #+#             */
/*   Updated: 2017/07/11 12:04:46 by rwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VALID_H
# define VALID_H

# include "io.h"

int		is_number(char *str);
int		is_sign(char c);
int		valid(char s, int v2);
int		ft_usage(int a, int b);

#endif
