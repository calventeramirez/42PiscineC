/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcalvent <pcalvent@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 20:07:53 by pcalvent          #+#    #+#             */
/*   Updated: 2023/07/08 20:28:27 by pcalvent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	swapping;

	i = 0;
	while (i < (size / 2))
	{
		swapping = tab [i];
		tab[i] = tab[size - 1 - i];
		tab[size - 1 - i] = swapping;
		i++;
	}
}
