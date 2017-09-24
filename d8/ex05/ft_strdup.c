/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/05 13:49:59 by rwang             #+#    #+#             */
/*   Updated: 2017/07/05 14:15:44 by rwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		len;
	char	*copy;

	len = 0;
	while (src[len])
		len++;
	if (!(copy = (char *)malloc(sizeof(*src) * (len + 1))))
		return (0);
	copy[len] = 0;
	len--;
	while (len >= 0)
	{
		copy[len] = src[len];
		len--;
	}
	return (copy);
}
