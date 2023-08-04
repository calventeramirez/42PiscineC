/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcalvent <pcalvent@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 20:38:27 by pcalvent          #+#    #+#             */
/*   Updated: 2023/07/06 17:42:57 by pcalvent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	primer_tramo(int a, int b)
{
	int		div;
	int		unidad;
	char	divterm;
	char	unidadterm;

	div = a / 10;
	divterm = div + '0';
	write(1, &divterm, 1);
	unidad = a % 10;
	unidadterm = unidad + '0';
	write(1, &unidadterm, 1);
	write(1, " ", 1);
	div = b / 10;
	divterm = div + '0';
	write(1, &divterm, 1);
	unidad = b % 10;
	unidadterm = unidad + '0';
	write(1, &unidadterm, 1);
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			primer_tramo (a, b);
			if (a != 98)
			{
				write(1, ", ", 2);
			}
			b++;
		}
		a++;
	}
}
