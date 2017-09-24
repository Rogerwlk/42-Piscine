/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/13 23:31:28 by rwang             #+#    #+#             */
/*   Updated: 2017/07/13 23:39:52 by rwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <time.h>
#include <stdlib.h>
#include <unistd.h>
#include <utmp.h>
#include <errno.h>
#include <sys/types.h>

void	ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}

void	ft_puterror(char *str)
{
	while (*str)
		write(2, str++, 1);
}

int		main(void)
{
	time_t	current_time;
	char	*c_time_string;

	current_time = time(NULL);
	if (current_time == ((time_t)-1))
	{
		ft_puterror("Failure to obtain the current time.\n");
		return (1);
	}
	c_time_string = ctime(&current_time);
	if (c_time_string == NULL)
	{
		ft_puterror("Failure to convert the current time.\n");
		return (1);
	}
	ft_putstr("\nwtmp begins ");
	ft_putstr(c_time_string);
	return (0);
}
