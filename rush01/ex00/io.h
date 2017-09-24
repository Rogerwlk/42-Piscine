/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   io.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/09 18:47:30 by rwang             #+#    #+#             */
/*   Updated: 2017/07/09 18:50:12 by rwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IO_H
# define IO_H

# include <unistd.h>

# ifndef SIZE
#  define SIZE	9
# endif

void			ft_putchar(char c);
void			input(int puzzle[SIZE][SIZE], char **argv);
void			output(int puzzle[SIZE][SIZE]);

#endif
