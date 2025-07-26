/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucmunoz <lucmunoz@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/26 12:09:54 by lucmunoz          #+#    #+#             */
/*   Updated: 2025/07/26 12:19:53 by lucmunoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*range;
	int	j;

	i = 0;
	j = max - min;
	range = malloc(sizeof(int) * j);
	if (min >= max)
		return (0);
	if (!range)
		return (0);
	while (i < j && range[i])
	{
		range[i] = min + i;
		i++;
	}
	return (range);
}
