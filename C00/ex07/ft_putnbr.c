/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcalvent <pcalvent@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 17:45:46 by pcalvent          #+#    #+#             */
/*   Updated: 2023/07/06 19:07:25 by pcalvent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	escribirchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		ft_putnbr(nb / 10);
		escribirchar('8');
	}
	else if (nb < 0)
	{
		escribirchar('-');
		ft_putnbr(-nb);
	}
	else
	{
		if (nb <= 9)
		{
			escribirchar('0' + nb);
		}
		if (nb > 9)
		{
			ft_putnbr(nb / 10);
			escribirchar('0' + nb % 10);
		}
	}
}
