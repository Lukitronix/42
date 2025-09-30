/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucmunoz <lucmunoz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/12 12:22:55 by lucmunoz          #+#    #+#             */
/*   Updated: 2025/07/12 12:42:22 by lucmunoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	recursion(int n, int pos, int prev_digit)
{
	char	c;
	int		digit;

	digit = prev_digit + 1;
	while (digit <= 9)
	{
		c = digit + '0';
		ft_putchar(c);
		if (pos < n - 1)
			recursion(n, pos + 1, digit);
		else if (digit != (10 - n + pos))
			write(1, ", ", 1);
		digit++;
	}
}

void	ft_print_combn(int n)
{
	if (n <= 0 || n >= 10)
		return ;
	recursion(n, 0, -1);
}
