/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruida-si <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/07 14:19:41 by ruida-si          #+#    #+#             */
/*   Updated: 2024/08/07 14:19:45 by ruida-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_hex(char c)
{
	char	*base;
	char	a;

	base = "0123456789abcdef";
	a = base[c / 16];
	write(1, &a, 1);
	a = base[c % 16];
	write(1, &a, 1);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;	

	i = 0;
	while (str[i])
	{
		if (str[i] == 127)
			write(1, "\\7f", 3);
		else if (str[i] < 32 && str[i] >= 0)
		{
			write(1, "\\", 1);
			print_hex(str[i]);
		}
		else
			write(1, &str[i], 1);
		i++;
	}
}
/*
int main()
{
char str[] = "Coucou\ntu \x1F vFas\t bien ?";
ft_putstr_non_printable(str);
}
*/
