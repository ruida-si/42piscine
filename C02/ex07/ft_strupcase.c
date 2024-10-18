/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruida-si <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 19:28:52 by ruida-si          #+#    #+#             */
/*   Updated: 2024/08/06 19:28:56 by ruida-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] > 96 && str[i] < 123)
			str[i] = str[i] - 'a' + 65;
		i++;
	}
	return (str);
}
/*
#include <stdio.h>

int main()
{
char str[] = "testF23";
printf("%s\n", ft_strupcase(str));
}
*/
