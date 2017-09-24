/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_takes_place.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/06 18:55:49 by rwang             #+#    #+#             */
/*   Updated: 2017/07/06 19:37:08 by rwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_takes_place(int hour)
{
	int val;

	printf("THE FOLLOWING TAKES PLACE BETWEEN ");
	if (hour > 12 && hour < 23)
	{
		val = hour - 12;
		printf("%d.00 P.M. AND %d.00 P.M.\n", val, (val + 1));
	}
	else if (hour > 0 && hour < 11)
	{
		val = hour;
		printf("%d.00 A.M. AND %d.00 A.M.\n", val, (val + 1));
	}
	else if (hour == 0)
		printf("12.00 A.M. AND 1.00 A.M.\n");
	else if (hour == 11)
		printf("11.00 A.M. AND 12.00 P.M.\n");
	else if (hour == 12)
		printf("12.00 P.M. AND 1.00 P.M.\n");
	else if (hour == 23)
		printf("11.00 P.M. AND 12.00 A.M.\n");
}
