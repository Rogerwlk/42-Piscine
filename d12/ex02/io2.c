/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   io2.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/13 22:29:29 by rwang             #+#    #+#             */
/*   Updated: 2017/07/13 22:33:04 by rwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_tail.h"

void	ft_no_file(char *filename)
{
	ft_puterror("tail: ");
	ft_puterror(filename);
	ft_puterror(": No such file or directory\n");
}
