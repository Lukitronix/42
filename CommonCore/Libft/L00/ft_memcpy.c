/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lukitronix <lukitronix@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/29 19:33:54 by lucmunoz          #+#    #+#             */
/*   Updated: 2025/10/13 21:15:45 by lukitronix       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*u;
	const unsigned char	*s;

	if (!dest && !src)
		return (NULL);
	i = 0;
	u = (unsigned char *)dest;
	s = (const unsigned char *)src;
	while (i < n)
	{
		u[i] = s[i];
		i++;
	}
	return (dest);
}
