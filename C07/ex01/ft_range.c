/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruida-si <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 16:09:22 by ruida-si          #+#    #+#             */
/*   Updated: 2024/08/20 16:09:25 by ruida-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	range;
	int	*new;
	int	i;

	range = max - min;
	if (min >= max)
		return (0);
	new = malloc(sizeof(int) * range);
	i = 0;
	while (max > min)
	{
		new[i] = min++;
		i++;
	}
	return (new);
}
