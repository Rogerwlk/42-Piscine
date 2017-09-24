/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_advanced_sort_wordtab.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/10 23:29:20 by rwang             #+#    #+#             */
/*   Updated: 2017/07/10 23:31:02 by rwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_advanced_sort_wordtab(char **tab, int (*cmp)(char *, char *))
{
	int		i;
	int		j;
	int		min;
	char	*temp;

	i = 0;
	while (tab[i])
	{
		j = i + 1;
		min = i;
		while (tab[j])
		{
			if (cmp(tab[min], tab[j]) > 0)
				min = j;
			j++;
		}
		if (min != i)
		{
			temp = tab[i];
			tab[i] = tab[min];
			tab[min] = temp;
		}
		i++;
	}
}
