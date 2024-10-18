/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruida-si <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 17:39:07 by ruida-si          #+#    #+#             */
/*   Updated: 2024/08/05 17:39:25 by ruida-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	temp;
	int	count;

	count = 0;
	while (count < size / 2)
	{
		temp = tab[count];
		tab[count] = tab[size - 1 - count];
		tab[size - 1 - count] = temp;
		count++;
	}
}
/*
#include <stdio.h>

int main()
{
	int n = 5;
	int array[] = {1, 2, 3, 4, 5};

	ft_rev_int_tab(array, n);
	
	int i = 0;
	while (i < n)
	{		
		printf("%i ", array[i]);
		i++;
	}
}
*/
