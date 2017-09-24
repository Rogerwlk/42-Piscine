/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/30 12:21:05 by rwang             #+#    #+#             */
/*   Updated: 2017/06/30 13:02:34 by rwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int low;
	int high;
	int mid;

	low = 0;
	high = 46340;
	if (nb < 0 || nb > 2147395600)
		return (0);
	while (low < high)
	{
		mid = (low + high) / 2;
		if (mid * mid < nb)
		{
			if ((mid + 1) * (mid + 1) > nb)
				return (0);
			low = mid + 1;
		}
		else
		{
			if ((mid - 1) * (mid - 1) < nb)
				return (0);
			high = mid - 1;
		}
	}
	return (low);
}
