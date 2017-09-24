/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/04 14:13:48 by rwang             #+#    #+#             */
/*   Updated: 2017/07/04 23:33:19 by rwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);
int		valid_base(char *base);
int		calculate(char *output, int nbr, char *base);

void	ft_putnbr_base(int nbr, char *base)
{
	int		output_pos;
	int		positive;
	char	output[33];

	if (!valid_base(base))
		return ;
	positive = 0;
	if (nbr >= 0)
		positive = 1;
	output_pos = calculate(output, nbr, base);
	if (!positive)
		output[output_pos++] = '-';
	output_pos--;
	while (output_pos >= 0)
		ft_putchar(output[output_pos--]);
}

int		valid_base(char *base)
{
	char *copy;

	if (*base == '\0' || base[1] == '\0')
		return (0);
	while (*base)
	{
		if (*base == '+' || *base == '-' || *base < ' ' || *base > '~')
			return (0);
		copy = base + 1;
		while (*copy)
		{
			if (*copy == *base)
				return (0);
			copy++;
		}
		base++;
	}
	return (1);
}

int		calculate(char *output, int nbr, char *base)
{
	int	output_pos;
	int	digit;
	int base_size;

	base_size = 0;
	while (base[base_size])
		base_size++;
	output_pos = 0;
	while (nbr != 0)
	{
		digit = nbr % base_size;
		if (digit >= 0)
			output[output_pos++] = base[digit];
		else
			output[output_pos++] = base[-digit];
		nbr /= base_size;
	}
	return (output_pos);
}
