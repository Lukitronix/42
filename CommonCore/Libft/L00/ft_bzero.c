/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucmunoz <lucmunoz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/29 19:22:46 by lucmunoz          #+#    #+#             */
/*   Updated: 2025/09/29 21:05:33 by lucmunoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	ft_bzero(void *s, size_t n)
{
	int				i;
	unsigned char	*u;

	i = 0;
	u = (unsigned char *)s;
	while (i < n)
	{
		u[i] = 0;
		i++;
	}
	return (s);
}
