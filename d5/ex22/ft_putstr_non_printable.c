/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/04 17:58:07 by rwang             #+#    #+#             */
/*   Updated: 2017/07/04 21:47:31 by rwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	ft_putchar(char c);
char	hex(int dec);

void	ft_putstr_non_printable(char *str)
{
	int temp;

	while (*str)
	{
		if (!(*str >= ' ' && *str <= '~'))
		{
			ft_putchar('\\');
			temp = *str;
			ft_putchar(hex(*str / 16));
			ft_putchar(hex(*str % 16));
		}
		else
			ft_putchar(*str);
		str++;
	}
}

char	hex(int dec)
{
	if (dec < 10)
		return (dec + '0');
	else
		return (dec - 10 + 'a');
}
