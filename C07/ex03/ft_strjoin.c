/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcalvent <pcalvent@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 11:33:20 by pcalvent          #+#    #+#             */
/*   Updated: 2023/07/23 12:41:57 by pcalvent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	length(char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

char	*cpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}

int	r_l(int size, char **strs, int size_sep)
{
	int	i;
	int	l;

	i = 0;
	l = size_sep * -1;
	while (i < size)
	{
		l += size_sep + length(strs[i]);
		i++;
	}
	return (l);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*s;
	int		i;
	int		j;

	if (size == 0)
	{
		s = (char *)malloc(1);
		return (s);
	}
	j = r_l(size, strs, length(sep));
	i = 0;
	s = (char *) malloc (sizeof(char) * (j + 1));
	if (s == NULL)
		return (0);
	while (i < size)
	{
		s = cpy(s, strs[i]);
		if (i + 1 < size)
			s = cpy(s, sep);
		i++;
	}
	s[i] = '\0';
	return (s - j);
}
