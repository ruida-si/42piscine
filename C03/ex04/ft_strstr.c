/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruida-si <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/10 19:01:48 by ruida-si          #+#    #+#             */
/*   Updated: 2024/08/10 19:01:52 by ruida-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;	

	i = 0;
	j = 0;
	if (!to_find[0])
		return (str);
	while (str[i])
	{
		if (str[i] == to_find[j])
		{
			while (to_find[j] && str[i + j] == to_find[j])
				j++;
			if (!to_find[j])
				return (str + i);
			j = 0;
		}
		i++;
	}
	return (0);
}
/*
#include <stdio.h>

int main()
{
char str[] = "Hello";
char to_find[] = "el";
printf("%s\n", ft_strstr(str, to_find));
}
*/
