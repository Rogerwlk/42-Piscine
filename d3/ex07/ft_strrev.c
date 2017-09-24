/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/29 17:06:17 by rwang             #+#    #+#             */
/*   Updated: 2017/06/29 18:00:28 by rwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrev(char *str)
{
	char	*copy;
	char	temp;
	int		len;
	int		begin;

	copy = str;
	len = 0;
	while (*copy != '\0')
	{
		len++;
		copy++;
	}
	len--;
	begin = 0;
	while (begin < len)
	{
		temp = str[begin];
		*(str + begin) = *(str + len);
		*(str + len) = temp;
		begin++;
		len--;
	}
	return (str);
}
