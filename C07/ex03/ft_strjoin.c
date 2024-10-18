/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruida-si <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 17:56:51 by ruida-si          #+#    #+#             */
/*   Updated: 2024/08/20 17:56:53 by ruida-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ftstrlen(int size, char **strs)
{
	int	i;
	int	j;
	int	a;

	i = 0;
	a = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
			a++;
		i++;
	}
	return (a);
}

int	fstrlen(char *sep)
{
	int	i;	

	i = 0;
	while (sep[i])
		i++;
	return (i);
}

char	*concatenate(int size, char **strs, char *sep)
{
	char	*new;
	int		i;
	int		j;
	int		a;

	i = 0;
	a = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
			new[a++] = strs[i][j++];
		j = 0;
		while (sep[j] && i < size -1)
			new[a++] = sep[j++];
		i++;
	}
	new[a] = '\0';
	return (new);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*new;	
	int		a;

	if (size <= 0)
	{
		return (0);
	}
	a = ftstrlen(size, *strs);
	new = malloc(sizeof(char) * a
			+ sizeof(char) * fstrlen(sep) * (size -1));
	if (new == NULL)
		return (0);
	new = concatenate(size, *strs, sep);
	return (new);
}
