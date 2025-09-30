/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lukitronix <lukitronix@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/26 12:09:54 by lucmunoz          #+#    #+#             */
/*   Updated: 2025/07/31 21:39:37 by lukitronix       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int		*arr;
	int		i;
	size_t	l;

	if (min >= max)
	{
		arr = NULL;
		return (arr);
	}
	i = 0;
	l = (size_t)(max - min) + 1;
	arr = malloc(l * 4);
	while (min < max)
		arr[i++] = min++;
	arr[i] = '\0';
	return (arr);
}

// #include <stdio.h>

// int	main(void)
// {
// 	int	*arr;

// 	arr = ft_range(11, 20);
// 	while (*arr != '\0')
// 	{
// 		printf("%d", *arr);
// 		arr++;
// 	}
// }