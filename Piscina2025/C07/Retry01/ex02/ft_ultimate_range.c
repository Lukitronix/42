/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lukitronix <lukitronix@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/26 15:29:29 by lucmunoz          #+#    #+#             */
/*   Updated: 2025/07/31 21:40:03 by lukitronix       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int		i;
	size_t	l;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	i = 0;
	l = (size_t)(max - min) + 1;
	*range = (int *)malloc(l * 4);
	if (!range)
	{
		*range = NULL;
		return (-1);
	}
	while (min < max)
		range[0][i++] = min++;
	range[0][i] = '\0';
	return (l);
}
// #include <stdio.h>

// int	main(void)
// {
// 	int	*arr;

// 	printf("%d", ft_ultimate_range(&arr, 11, 20));
// 	while (*arr != '\0')
// 	{
// 		printf("%d", *arr);
// 		arr++;
// 	}
// }