/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   io.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/10 21:04:26 by rwang             #+#    #+#             */
/*   Updated: 2017/07/11 12:13:42 by rwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IO_H
# define IO_H

# include "unistd.h"

void			ft_putchar(char c);
void			ft_putnbr(int str);
int				ft_atoi(char *str);
char			get_sign(char *str);

#endif
