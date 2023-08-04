/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcalvent <pcalvent@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 20:30:26 by pcalvent          #+#    #+#             */
/*   Updated: 2023/07/08 20:56:23 by pcalvent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	aux;

	i = 0;
	j = 1;
	while (i < size - 1)
	{
		if (tab[j] < tab [i])
		{
			aux = tab[j];
			tab[j] = tab [i];
			tab[i] = aux;
			i = 0;
			j = 1;
		}
		else
		{
			i++;
			j++;
		}
	}
}
