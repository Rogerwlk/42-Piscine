/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_wordtab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/10 23:07:45 by rwang             #+#    #+#             */
/*   Updated: 2017/07/10 23:24:24 by rwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		cmp_str(char *s1, char *s2);

void	ft_sort_wordtab(char **tab)
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
			if (cmp_str(tab[min], tab[j]) > 0)
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

int		cmp_str(char *s1, char *s2)
{
	while (*s1 == *s2)
	{
		if (*s1 == '\0')
			return (0);
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
