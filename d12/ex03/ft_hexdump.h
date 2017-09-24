/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexdump.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/13 16:07:30 by rwang             #+#    #+#             */
/*   Updated: 2017/07/13 23:10:41 by rwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_HEXDUMP_H
# define FT_HEXDUMP_H

# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>
# include <sys/types.h>
# include <sys/stat.h>

void	ft_putchar(char c);
void	ft_putstr(char *str);
void	ft_puterror(char *str);
void	ft_illegal_option(char *str);
void	ft_no_file(char *str);
void	ft_bad_descriptor(char *str);
void	judge_print(int fd, int flag);
void	ft_print_memory(char *buf, int ret, int flag);
void	print_hex_ascii(char *addr, int flag);
char	hex(int dec);
void	print_str(char *addr);
int		ft_strcmp(char *s1, char *s2);
void	ft_strcpy16(char *s1, char *s2);
int		parse_option(char *str);
void	output_files(int ac, char **av, int flag);
void	print_g_addr(void);
void	add_g_addr(int num);

#endif
