/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_strs_to_tab.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lukitronix <lukitronix@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/31 22:04:02 by lukitronix        #+#    #+#             */
/*   Updated: 2025/07/31 22:04:21 by lukitronix       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_str_to_tab.h"

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

char	*ft_strdup(char *src, int size)
{
	char	*dest;
	int		i;

	dest = malloc(size + 1);
	if (!dest)
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

void	free_tab(struct s_stock_str *tab, int index)
{
	while (index >= 0)
	{
		free(tab[index].copy);
		index--;
	}
	free(tab);
}

struct s_stock_str	*init_tab(int ac)
{
	struct s_stock_str	*tab;

	tab = malloc(sizeof(struct s_stock_str) * (ac + 1));
	if (!tab)
		return (NULL);
	return (tab);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	struct s_stock_str	*tab;
	int					i;

	tab = init_tab(ac);
	if (!tab)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		tab[i].size = ft_strlen(av[i]);
		tab[i].str = av[i];
		tab[i].copy = ft_strdup(av[i], tab[i].size);
		if (!tab[i].copy)
		{
			free_tab(tab, i - 1);
			return (NULL);
		}
		i++;
	}
	tab[i].str = 0;
	return (tab);
}