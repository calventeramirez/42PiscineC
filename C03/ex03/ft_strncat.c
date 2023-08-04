/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcalvent <pcalvent@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 10:36:25 by pcalvent          #+#    #+#             */
/*   Updated: 2023/07/12 11:00:20 by pcalvent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	length_src;
	unsigned int	length_dest;

	length_src = 0;
	length_dest = 0;
	while (dest[length_dest] != '\0')
	{
		length_dest++;
	}
	while (src[length_src] != '\0' && length_src < nb)
	{
		dest[length_dest] = src[length_src];
		length_dest++;
		length_src++;
	}
	dest[length_dest] = '\0';
	return (dest);
}
