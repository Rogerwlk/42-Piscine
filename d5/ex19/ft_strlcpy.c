/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/04 13:14:10 by rwang             #+#    #+#             */
/*   Updated: 2017/07/04 14:03:41 by rwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	char			*d;
	char			*s;
	unsigned int	i;

	d = dest;
	s = src;
	i = size;
	if (i > 0)
	{
		while (--i > 0 && *s)
			*d++ = *s++;
		*d = 0;
	}
	if (i == 0)
		while (*s)
			s++;
	return (s - src);
}
