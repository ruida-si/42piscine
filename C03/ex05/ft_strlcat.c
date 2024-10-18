/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruida-si <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 11:30:44 by ruida-si          #+#    #+#             */
/*   Updated: 2024/08/12 11:30:50 by ruida-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *string)
{
	int	i;

	i = 0;
	while (string[i])
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	j;
	unsigned int	d;
	unsigned int	s;
	unsigned int	i;	

	j = 0;
	d = ft_strlen(dest);
	s = ft_strlen(src);
	if (size <= d)
		return (s + size);
	i = d;
	while (src[j] && (i < size - 1))
		dest[i++] = src[j++];
	dest[i] = '\0';
	return (d + s);
}
/*
#include <stdio.h>

int main()
{
char dest[] = "Hello";
char src[] = "Rui";
int size = 4;
ft_strlcat(dest, src, size);
printf("%i\n", ft_strlcat(dest, src, size));
printf("%s\n", dest);
}
*/
