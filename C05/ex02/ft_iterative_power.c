/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcalvent <pcalvent@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 15:08:49 by pcalvent          #+#    #+#             */
/*   Updated: 2023/07/17 15:15:26 by pcalvent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	count;
	int	acum;

	count = 0;
	acum = 1;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (count < power)
	{
		acum *= nb;
		count++;
	}
	return (acum);
}
