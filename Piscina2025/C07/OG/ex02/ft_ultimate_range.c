/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucmunoz <lucmunoz@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/26 15:29:29 by lucmunoz          #+#    #+#             */
/*   Updated: 2025/07/30 21:10:47 by lucmunoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	size;
	int	*ranges;

	i = 0;
	size = max - min;
	ranges = malloc(sizeof(int) * size);
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	if (!ranges)
		return (-1);
	while (i < size && ranges[i])
	{
		ranges[i] = min + i;
		i++;
	}
	*range = ranges;
	return (size);
}
