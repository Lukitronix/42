/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucmunoz <lucmunoz@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 18:35:35 by lucmunoz          #+#    #+#             */
/*   Updated: 2025/07/16 19:06:00 by lucmunoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	n;
	unsigned int	m;

	i = 0;
	j = 0;
	n = 0;
	m = 0;
	while (n < size)
	{
		n++;
	}
	while (src[m])
	{
		m++;
	}
	i = n;
	while ((i + 1) < size)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	return (n + m);
}
