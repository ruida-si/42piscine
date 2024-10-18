/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruida-si <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/17 11:12:11 by ruida-si          #+#    #+#             */
/*   Updated: 2024/08/17 11:12:15 by ruida-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	number;

	number = 1;
	if (nb < 0)
		return (0);
	if (nb < 2)
		return (1);
	while (nb > 1)
	{
		number *= nb;
		nb--;
	}
	return (number);
}
/*
#include <stdio.h>

int main()
{
printf("%i\n", ft_iterative_factorial(4));
}
*/
