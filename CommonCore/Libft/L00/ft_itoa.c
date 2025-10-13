/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lukitronix <lukitronix@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 16:41:05 by lukitronix        #+#    #+#             */
/*   Updated: 2025/10/13 19:33:27 by lukitronix       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_numlen(int n)
{
	int	i;

	i = (n <= 0);
	while (n)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	int		i;
	char	*res;
	long	nb;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	i = ft_numlen(n);
	res = malloc(sizeof(char) * (i + 1));
	if (!res)
		return (NULL);
	nb = n;
	if (nb < 0)
	{
		res[0] = '-';
		nb = -nb;
	}
	res[i--] = '\0';
	while (nb > 0)
	{
		res[i--] = (nb % 10) + '0';
		nb /= 10;
	}
	if (n == 0)
		res[0] = '0';
	return (res);
}
