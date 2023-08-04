/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcalvent <pcalvent@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 15:59:48 by pcalvent          #+#    #+#             */
/*   Updated: 2023/07/13 16:20:23 by pcalvent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

unsigned int	length(char *s)
{
	unsigned int	count;

	count = 0;
	while (s[count] != '\0')
	{
		count++;
	}
	return (count);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	pos;
	unsigned int	count;

	pos = length(dest);
	count = 0;
	if (size <= pos)
		return (pos);
	size--;
	while (pos < size && src[count] != '\0')
	{
		dest[pos] = src[count];
		pos++;
		count++;
	}
	dest[pos] = 0;
	return (pos);
}
