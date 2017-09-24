/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unmatch.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/07 16:05:01 by rwang             #+#    #+#             */
/*   Updated: 2017/07/07 16:44:57 by rwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	remove(int *tab, int i, int len)
{
	while (i < len)
	{
		tab[i] = tab[i + 1];
		i++;
	}
}

int		ft_unmatch(int *tab, int length)
{
	int i;
	int j;

	length--;
	while (length > 0)
	{
		i = 0;
		j = 1;
		while (j <= length)
		{
			if (tab[i] == tab[j])
			{
				remove(tab, i, length);
				length--;
				remove(tab, (j - 1), length);
				length--;
				break ;
			}
			j++;
		}
		if (j > length)
			return (tab[i]);
	}
	return (-1);
}
