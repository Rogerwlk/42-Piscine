/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/03 14:52:39 by rwang             #+#    #+#             */
/*   Updated: 2017/07/03 16:38:09 by rwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int i;

	if (*to_find == '\0')
		return (str);
	while (*str != '\0')
	{
		if (*str == *to_find)
		{
			i = 0;
			while (*str != '\0' && to_find[i] != '\0')
			{
				if (*str != to_find[i])
					break ;
				i++;
				str++;
			}
			if (to_find[i] == '\0')
				return (str - i);
		}
		else
			str++;
	}
	return (0);
}
