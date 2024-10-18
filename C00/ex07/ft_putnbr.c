/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruida-si <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/03 15:45:59 by ruida-si          #+#    #+#             */
/*   Updated: 2024/08/03 15:47:03 by ruida-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	long	max;

	max = nb;
	if (max < 0)
	{
		write(1, "-", 1);
		max = -max;
	}
	if (max > 9)
	{
		ft_putnbr(max / 10);
		putchar(max % 10 + '0');
	}
	else
		putchar(max + '0');
}
/*
int main(void)
{
ft_putnbr(2147483647);
}
*/
