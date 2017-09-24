/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tail.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/12 21:54:26 by rwang             #+#    #+#             */
/*   Updated: 2017/07/13 22:59:53 by rwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_TAIL_H
# define FT_TAIL_H

# include <unistd.h>
# include <fcntl.h>
# include <sys/types.h>
# include <sys/stat.h>

void	ft_putstr(char *str);
void	ft_puterror(char *error);
void	ft_putfilename(char *str);
void	ft_no_file(char *filename);
void	output_tail(int fd, int num, int flag, char *str);
void	output_files(int ac, char **av, int num, int flag);
int		illegal_offset(char *str);
int		parse_option(char *str, int *num);
int		ft_atoi(char *str);

#endif
