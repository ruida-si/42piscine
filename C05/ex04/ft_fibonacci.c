/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruida-si <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/17 12:35:47 by ruida-si          #+#    #+#             */
/*   Updated: 2024/08/17 12:35:50 by ruida-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	int	n;

	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	if (index == 1)
		return (1);
	else
		n = ft_fibonacci(index - 1) + ft_fibonacci(index - 2);
	return (n);
}
/*
#include <stdio.h>

int main()
{
printf("%i\n", ft_fibonacci(9));
}
*/
