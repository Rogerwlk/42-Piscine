/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/03 12:33:22 by rwang             #+#    #+#             */
/*   Updated: 2017/07/03 13:03:39 by rwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	char *copy;

	copy = dest;
	while ((*dest = *src) != '\0')
	{
		dest++;
		src++;
	}
	*dest = '\0';
	return (copy);
}
