/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruida-si <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/17 11:50:55 by ruida-si          #+#    #+#             */
/*   Updated: 2024/08/17 11:50:58 by ruida-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	number;

	number = 1;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (power > 0)
	{
		number *= nb;
		power--;
	}
	return (number);
}
/*
#include <stdio.h>

int main()
{
printf("%i\n", ft_iterative_power(-4, 2));
}
*/
