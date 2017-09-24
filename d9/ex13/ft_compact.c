/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_compact.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/07 14:26:40 by rwang             #+#    #+#             */
/*   Updated: 2017/07/07 14:41:02 by rwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_compact(char **tab, int length)
{
	int		copy;
	int		pos;

	length--;
	pos = length - 1;
	while (pos >= 0)
	{
		if ((*tab)[pos] == 0)
		{
			copy = pos;
			while (copy < length)
			{
				(*tab)[copy] = (*tab)[copy + 1];
				copy++;
			}
			(*tab)[copy] = 0;
		}
		pos--;
	}
	pos = 0;
	while ((*tab)[pos])
		pos++;
	return (pos);
}
