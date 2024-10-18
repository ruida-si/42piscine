/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruida-si <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 15:57:38 by ruida-si          #+#    #+#             */
/*   Updated: 2024/08/05 15:57:43 by ruida-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
#include <stdio.h>

int main()
{
int a = 15;
int b = 5;

int div = 0;
int mod = 2;

printf("B: %i, %i\n", div, mod);
ft_div_mod(a, b, &div, &mod);
printf("A: %i, %i\n", div, mod);
}
*/
