/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcalvent <pcalvent@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 19:29:24 by pcalvent          #+#    #+#             */
/*   Updated: 2023/07/24 15:15:24 by pcalvent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	prime(int num)
{
	int	i;

	i = 2;
	while (i < num)
	{
		if (num % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	if (nb <= 1)
		return (2);
	while (!prime(nb))
	{
		nb++;
	}
	return (nb);
}
