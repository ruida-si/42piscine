/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruida-si <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/07 10:29:32 by ruida-si          #+#    #+#             */
/*   Updated: 2024/08/07 10:29:34 by ruida-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	count;

	count = 0;
	i = 0;
	while (src[count])
		count++;
	if (size > 0)
	{
		while (src[i] && i < size -1)
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (count);
}
/*
#include <stdio.h>

int main()
{
char src[] = "Hello";
char dest[3];
ft_strlcpy(dest, src, sizeof(dest));
printf("%s\n", dest);
printf("%i\n", ft_strlcpy(dest, src, sizeof(dest)));
}
*/
