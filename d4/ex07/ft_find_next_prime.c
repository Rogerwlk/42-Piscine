/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/30 15:03:54 by rwang             #+#    #+#             */
/*   Updated: 2017/06/30 15:28:20 by rwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_find_next_prime(int nb)
{
	int is_prime;
	int i;

	if (nb <= 1)
		return (2);
	if (nb % 2 == 0 && nb > 2)
		nb++;
	while (1)
	{
		i = 3;
		is_prime = 1;
		while (i < (nb >> 1))
		{
			if (nb % i == 0)
			{
				is_prime = 0;
				break ;
			}
			i += 2;
		}
		if (is_prime)
			return (nb);
		nb += 2;
	}
}
