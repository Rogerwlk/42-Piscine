/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/05 11:58:58 by rwang             #+#    #+#             */
/*   Updated: 2017/07/05 12:28:53 by rwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);
int		cmp_str(char *s1, char *s2);
void	swap_str(char **s1, char **s2);
void	print_str(char *str);

int		main(int argc, char **argv)
{
	int i;
	int j;
	int min;

	i = 1;
	while (i < argc)
	{
		j = i + 1;
		min = i;
		while (j < argc)
		{
			if (cmp_str(argv[min], argv[j]) > 0)
				min = j;
			j++;
		}
		if (min != i)
			swap_str(&argv[i], &argv[min]);
		i++;
	}
	i = 1;
	while (i < argc)
		print_str(argv[i++]);
	return (0);
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

void	swap_str(char **s1, char **s2)
{
	char *temp;

	temp = *s1;
	*s1 = *s2;
	*s2 = temp;
}

void	print_str(char *str)
{
	while (*str)
	{
		ft_putchar(*str);
		str++;
	}
	ft_putchar('\n');
}
