/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/03 12:03:37 by rwang             #+#    #+#             */
/*   Updated: 2017/07/04 22:32:51 by rwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int result;
	int positive;

	while (*str == '\r' || *str == '\f' || *str == ' ' || *str == '\t'
			|| *str == '\n' || *str == '\v')
		str++;
	positive = 1;
	if (*str == '-')
		positive = !positive;
	if (*str == '-' || *str == '+')
		str++;
	result = 0;
	if (positive)
		while (*str >= '0' && *str <= '9')
		{
			result = result * 10 + (*str - '0');
			str++;
		}
	else
		while (*str >= '0' && *str <= '9')
		{
			result = result * 10 - (*str - '0');
			str++;
		}
	return (result);
}
