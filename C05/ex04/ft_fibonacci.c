/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcalvent <pcalvent@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 15:30:07 by pcalvent          #+#    #+#             */
/*   Updated: 2023/07/17 16:34:54 by pcalvent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	int	a;
	int	b;

	a = 0;
	b = 1;
	if (index < 0)
		return (-1);
	else if (index == 0)
		return (a);
	else if (index == 1)
		return (b);
	else
		return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}
