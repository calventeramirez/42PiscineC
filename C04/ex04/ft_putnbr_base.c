/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcalvent <pcalvent@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 01:29:42 by pcalvent          #+#    #+#             */
/*   Updated: 2023/07/15 15:24:17 by pcalvent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	putchar(char c)
{
	write(1, &c, 1);
}

int	check(char *base)
{
	int	i;
	int	j;

	i = 0;
	if (base[0] == '\0' || base[1] == '\0')
		return (0);
	while (base[i])
	{
		j = i + 1;
		if (base[i] == '+' || base[i] == '-')
			return (0);
		if (base[i] < ' ' || base[i] > '~')
			return (0);
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	negative(int nbr)
{
	nbr = negative(nbr);
	putchar('-');
	return (nbr);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	size;
	int	res[256];
	int	i;

	i = 0;
	size = 0;
	if (check(base))
	{
		if (nbr < 0)
		{
			nbr = negative(nbr);
		}
		while (base[size])
			size++;
		while (nbr)
		{
			res[i] = nbr % size;
			nbr /= size;
			i++;
		}
		while (--i >= 0)
		{
			putchar(base[res[i]]);
		}
	}
}
