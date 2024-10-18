/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruida-si <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 16:32:55 by ruida-si          #+#    #+#             */
/*   Updated: 2024/08/05 16:33:03 by ruida-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	rem;

	div = *a / *b;
	rem = *a % *b;
	*a = div;
	*b = rem;
}
/*
#include <stdio.h>

int main()
{
int a = 12;
int b = 7;
printf("B: %i, %i\n", a , b);
ft_ultimate_div_mod(&a, &b);
printf("A: %i, %i\n", a , b);
}
*/
