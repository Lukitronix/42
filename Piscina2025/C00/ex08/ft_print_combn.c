/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lukitronix <lukitronix@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/12 12:22:55 by lucmunoz          #+#    #+#             */
/*   Updated: 2025/07/30 20:25:16 by lukitronix       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	init_comb(char *comb, int n)
{
	int	i ;

	i = 0;
	while (i < n)
	{
		comb[i] = '0' + i;
		i++;
	}
}

void	increment_comb(char *comb, int n)
{
	int	i;
	int	j;

	i = n - 1;
	while (i >= 0 && comb[i] == '9' - (n - 1) + i)
		i--;
	if (i >= 0)
	{
		comb[i]++;
		j = i + 1;
		while (j < n)
		{
			comb[j] = comb[j - 1] + 1;
			j++;
		}
	}
}

int	is_last_comb(char *comb, int n)
{
	return (comb[0] == '9' - n + 1);
}

void	ft_print_combn(int n)
{
	char	comb[10];

	if (n < 1 || n > 9)
		return ;
	init_comb(comb, n);
	while (1)
	{
		write(1, comb, n);
		if (is_last_comb(comb, n))
			break ;
		write(1, ", ", 2);
		increment_comb(comb, n);
	}
}