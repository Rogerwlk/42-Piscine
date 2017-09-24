/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   valid.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/09 18:48:39 by rwang             #+#    #+#             */
/*   Updated: 2017/07/09 18:57:06 by rwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VALID_H
# define VALID_H

# ifndef SIZE
#  define SIZE	9
# endif

int				valid_input(char **argv);
int				valid_original_puzzle(int puzzle[SIZE][SIZE]);
int				conflict(int puzzle[SIZE][SIZE], int row, int col);
int				conflict_group(int puzzle[SIZE][SIZE], int row, int col);

#endif
