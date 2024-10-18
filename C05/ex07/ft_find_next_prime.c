/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruida-si <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/17 15:56:11 by ruida-si          #+#    #+#             */
/*   Updated: 2024/08/17 15:56:14 by ruida-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_find_next_prime(int nb)
{
	int	n;

	n = 2;
	if (nb <= 2)
		return (2);
	while (n < nb)
	{
		if (nb % n == 0)
			return (ft_find_next_prime(nb + 1));
		n++;
	}
	return (nb);
}
/*
#include <stdio.h>

int main()
{
printf("%i\n", ft_find_next_prime(24));
}
*/
