/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcalvent <pcalvent@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 20:34:11 by pcalvent          #+#    #+#             */
/*   Updated: 2023/07/13 16:23:39 by pcalvent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	count;

	count = 0;
	while (count < n && s1[count] && s2[count])
	{
		if (s1[count] > s2[count])
			return (s1[count] - s2[count]);
		if (s2[count] > s1[count])
			return (s1[count] - s2[count]);
		count++;
	}
	if (count < n)
	{
		if (s1[count] && !s2[count])
			return (s1[count] - s2[count]);
		if (!s1[count] && s2[count])
			return (s1[count] - s2[count]);
	}
	return (0);
}
