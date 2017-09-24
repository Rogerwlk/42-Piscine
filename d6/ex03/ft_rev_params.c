/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/05 11:53:39 by rwang             #+#    #+#             */
/*   Updated: 2017/07/05 11:57:11 by rwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);
void	print_str(char *str);

int		main(int argc, char **argv)
{
	while (argc > 1)
	{
		print_str(argv[argc - 1]);
		ft_putchar('\n');
		argc--;
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
