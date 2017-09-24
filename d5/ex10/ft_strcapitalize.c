/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/03 17:36:57 by rwang             #+#    #+#             */
/*   Updated: 2017/07/03 18:11:09 by rwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	char	*copy;
	int		flag;

	flag = 1;
	copy = str;
	while (*copy != '\0')
	{
		if ((*copy >= 'a' && *copy <= 'z') || (*copy >= 'A' && *copy <= 'Z')
				|| (*copy >= '0' && *copy <= '9'))
		{
			if (flag && *copy >= 'a' && *copy <= 'z')
				*copy -= ('a' - 'A');
			else if (!flag && *copy >= 'A' && *copy <= 'Z')
				*copy += ('a' - 'A');
			flag = 0;
		}
		else
			flag = 1;
		copy++;
	}
	return (str);
}
