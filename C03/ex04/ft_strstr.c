/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcalvent <pcalvent@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 13:46:41 by pcalvent          #+#    #+#             */
/*   Updated: 2023/07/13 16:19:44 by pcalvent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	x;
	int	y;

	x = 0;
	y = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[x] != '\0')
	{
		while (str[x + y] == to_find[y])
		{
			y++;
			if (to_find[y] == '\0')
			{
				return (&str[x]);
			}
		}
		x++;
	}
	write(1, str, x);
	return (0);
}
