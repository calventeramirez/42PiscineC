/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcalvent <pcalvent@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/14 12:36:18 by pcalvent          #+#    #+#             */
/*   Updated: 2023/07/14 12:51:49 by pcalvent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		ft_putnbr(nb / 10);
		putchar('8');
	}
	else if (nb < 0)
	{
		putchar('-');
		ft_putnbr(-nb);
	}
	else
	{
		if (nb <= 9)
		{
			putchar('0' + nb);
		}
		if (nb > 9)
		{
			ft_putnbr(nb / 10);
			putchar('0' + nb % 10);
		}
	}
}
