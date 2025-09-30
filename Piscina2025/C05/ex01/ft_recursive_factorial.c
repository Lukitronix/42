/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucmunoz <lucmunoz@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 20:23:36 by lucmunoz          #+#    #+#             */
/*   Updated: 2025/07/22 20:54:55 by lucmunoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	if (nb == 0 || nb == 1)
		return (1);
	return (nb * ft_recursive_factorial(nb - 1));
}

/*int	main(void)
{
	printf("%d\n", ft_recursive_factorial(-3));
	printf("%d\n", ft_recursive_factorial(0));
	printf("%d\n", ft_recursive_factorial(1));
	printf("%d\n", ft_recursive_factorial(5));
}*/
