/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruida-si <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/17 11:27:46 by ruida-si          #+#    #+#             */
/*   Updated: 2024/08/17 11:27:48 by ruida-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int	number;	

	if (nb < 0)
		return (0);
	if (nb < 2)
		return (1);
	else
	{
		number = nb * (ft_recursive_factorial(nb -1));
		return (number);
	}
}
/*
#include <stdio.h>

int main()
{
printf("%i\n", ft_iterative_factorial(-12));
}
*/
