/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/05 11:45:22 by rwang             #+#    #+#             */
/*   Updated: 2017/07/05 11:51:23 by rwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);
void	print_str(char *str);

int		main(int argc, char **argv)
{
	int i;

	i = 1;
	while (i < argc)
	{
		print_str(argv[i]);
		ft_putchar('\n');
		i++;
	}
	return (0);
}

void	print_str(char *str)
{
	while (*str)
	{
		ft_putchar(*str);
		str++;
	}
}
