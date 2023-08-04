/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcalvent <pcalvent@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 01:41:55 by pcalvent          #+#    #+#             */
/*   Updated: 2023/07/27 11:14:41 by pcalvent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

int	length(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (1);
}

char	*strdup(char *src)
{
	char	*dest;
	int		i;

	dest = (char *) malloc (length(src) + 1);
	if (dest == NULL)
		return (NULL);
	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int			index;
	t_stock_str	*tab;

	tab = (t_stock_str *) malloc (sizeof(t_stock_str) * (ac + 1));
	if (tab == NULL)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		tab[i].str = av[i];
		tab[i].copy = strdup(av[i]);
		tab[i].size = length(av[i]);
		i++;
	}
	tab[i].str = '\0';
	return (tab);
}
