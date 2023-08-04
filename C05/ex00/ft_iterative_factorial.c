/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcalvent <pcalvent@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 11:37:38 by pcalvent          #+#    #+#             */
/*   Updated: 2023/07/18 11:18:46 by pcalvent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_iterative_factorial(int nb)
{
	int	fact;
	int	cont;

	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	fact = 1;
	cont = 1;
	while (cont <= nb)
	{
		fact *= cont;
		cont++;
	}
	return (fact);
}
