/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/03 21:49:55 by rwang             #+#    #+#             */
/*   Updated: 2017/07/04 10:56:35 by rwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, int nb)
{
	char *copy;

	if (nb <= 0)
		return (dest);
	copy = dest;
	while (*copy)
		copy++;
	while (nb > 0 && *src)
	{
		*copy = *src;
		nb--;
		copy++;
		src++;
	}
	if (nb == 0)
		*copy = 0;
	return (dest);
}
