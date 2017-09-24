/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_max.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/07 15:17:34 by rwang             #+#    #+#             */
/*   Updated: 2017/07/07 15:19:58 by rwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_max(int *tab, int length)
{
	int	max;

	if (length <= 0)
		return (0);
	max = tab[0];
	length--;
	while (length >= 0)
	{
		if (max < tab[length])
			max = tab[length];
		length--;
	}
	return (max);
}
