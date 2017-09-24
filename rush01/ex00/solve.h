/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/09 19:02:30 by rwang             #+#    #+#             */
/*   Updated: 2017/07/09 19:43:55 by rwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SOLVE_H
# define SOLVE_H

# ifndef SIZE
#  define SIZE	9
# endif

# include "valid.h"

int				unique(int puzzle[SIZE][SIZE], int row, int col, int *count);
int				solve(int puzzle[SIZE][SIZE], int row, int col);

#endif
