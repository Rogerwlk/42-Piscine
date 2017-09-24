/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/04 11:31:07 by rwang             #+#    #+#             */
/*   Updated: 2017/07/04 21:32:13 by rwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	dlen;
	unsigned int	slen;
	unsigned int	i;
	char			*d;
	char			*s;

	d = dest;
	s = src;
	i = size;
	while (i-- > 0 && *d)
		d++;
	dlen = d - dest;
	i = size - dlen;
	slen = 0;
	while (s[slen])
		slen++;
	if (i == 0)
		return (dlen + slen);
	while (*s && i > 1)
	{
		*d++ = *s++;
		i--;
	}
	*d = 0;
	return (dlen + slen);
}
