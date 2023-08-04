/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcalvent <pcalvent@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 18:42:29 by pcalvent          #+#    #+#             */
/*   Updated: 2023/07/08 18:52:30 by pcalvent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	dividendo;
	int	divisor;

	dividendo = *a;
	divisor = *b;
	if (divisor != 0)
	{
		*a = dividendo / divisor;
		*b = dividendo % divisor;
	}
}
