/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcalvent <pcalvent@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/14 13:22:03 by pcalvent          #+#    #+#             */
/*   Updated: 2023/07/15 15:04:32 by pcalvent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_atoi(char *str)
{
	int	number;
	int	count;
	int	flag;

	number = 0;
	count = 0;
	flag = 1;
	while (str[count] == ' ' || str[count] == '\t' || str[count] == '\f'
		|| str[count] == '\r' || str[count] == '\n' || str[count] == '\v')
		count++;
	while (str[count] == '+' || str[count] == '-')
	{
		if (str[count] == '-')
			flag *= (-1);
		count++;
	}
	while (str[count] && str[count] >= '0' && str[count] <= '9')
	{
		number = (number * 10) + (str[count] - '0');
		count++;
	}
	return (number * flag);
}
