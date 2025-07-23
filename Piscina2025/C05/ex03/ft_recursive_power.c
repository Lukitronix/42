/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucmunoz <lucmunoz@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 16:42:27 by lucmunoz          #+#    #+#             */
/*   Updated: 2025/07/23 17:03:47 by lucmunoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	return (nb * ft_recursive_power(nb, power - 1));
}

/*int	main(void)
{
	printf("%d\n", ft_recursive_power(2,3));
	printf("%d\n", ft_recursive_power(2,-5));
	printf("%d\n", ft_recursive_power(2,0));
	return (0);
}*/
