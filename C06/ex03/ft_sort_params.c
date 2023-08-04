/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcalvent <pcalvent@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 10:09:45 by pcalvent          #+#    #+#             */
/*   Updated: 2023/07/19 16:28:13 by pcalvent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

int	cmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] || s2[i])
	{
		if (s1[i] == s2[i])
			i++;
		if (s1[i] < s2[i] || s1[i] > s2[i])
			return (s1[i] - s2[i]);
	}
	return (0);
}

void	swap(char **ar1, char **ar2)
{
	char	*tmp;

	tmp = *ar1;
	*ar1 = *ar2;
	*ar2 = tmp;
}

int	main(int args, char *argv[])
{
	int	i;
	int	j;

	j = 1;
	while (j < args - 1)
	{
		i = 1;
		while (i < args - 1)
		{
			if (cmp(argv[i], argv[i + 1]) > 0)
				swap(&argv[i], &argv[i + 1]);
			i++;
		}
		j++;
	}
	i = 1;
	while (i < args)
	{
		putstr(argv[i]);
		write(1, "\n", 1);
		i++;
	}
}
