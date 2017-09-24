/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_door.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/07 13:54:10 by rwang             #+#    #+#             */
/*   Updated: 2017/07/07 14:18:30 by rwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_DOOR_H
# define FT_DOOR_H

# include <unistd.h>
# define CLOSE			0
# define OPEN			1
# define TRUE			1
# define FALSE			0
# define EXIT_SUCCESS	0

typedef struct			s_door
{
	int		state;
}						t_door;
typedef int				t_ft_bool;

void					close_door(t_door *door);
void					open_door(t_door *door);
t_ft_bool				is_door_open(t_door *door);
t_ft_bool				is_door_close(t_door *door);

#endif
