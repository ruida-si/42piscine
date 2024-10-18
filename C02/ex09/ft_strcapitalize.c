/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruida-si <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/07 09:55:50 by ruida-si          #+#    #+#             */
/*   Updated: 2024/08/07 09:55:53 by ruida-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	i;	

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		i++;
	}
	if (str[0] >= 'a' && str[0] <= 'z')
		str[0] -= 32;
	i = 0;
	while (str[i])
	{
		if ((str[i] < 48 || str[i] > 57) && (str[i] < 65 || str[i] > 90)
			&& (str[i] < 97 || str[i] > 122)
			&& (str[i +1] >= 'a' && str[i +1] <= 'z'))
			str[i +1] -= 32;
		i++;
	}
	return (str);
}
/*
#include <stdio.h>

int main()
{
char str[] = "salut, coUUnt tu vas ? 42mots qua.rante-deux; cin=qu\\nte+et+u";
printf("%s\n", ft_strcapitalize(str));
}
*/
