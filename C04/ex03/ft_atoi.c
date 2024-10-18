/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruida-si <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 16:42:58 by ruida-si          #+#    #+#             */
/*   Updated: 2024/08/13 16:43:01 by ruida-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	i;	
	int	min;
	int	number;

	i = 0;
	min = 0;
	number = 0;
	if (!str[0])
		return (0);
	while ((str[i] > 8 && str[i] < 14) || str[i] == 32)
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			min++;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		number = number * 10 + (str[i] - '0');
		i++;
	}
	if (min % 2 != 0)
		number = -number;
	return (number);
}
/*
#include <stdio.h>

int main()
{
char str[] = "---671234ab4";
printf("%i\n", ft_atoi(str));
}
*/
