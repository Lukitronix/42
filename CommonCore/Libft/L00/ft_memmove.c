/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lukitronix <lukitronix@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/29 19:52:37 by lucmunoz          #+#    #+#             */
/*   Updated: 2025/10/13 22:17:43 by lukitronix       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

static void	copy_forward(unsigned char *d, const unsigned char *s, size_t n)
{
	while (n--)
	{
		*d = *s;
		d++;
		s++;
	}
}

static void	copy_backward(unsigned char *d, const unsigned char *s, size_t n)
{
	while (n--)
		d[n] = s[n];
}

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;

	if (dest == src || n == 0)
		return (dest);
	if (!dest && !src)
		return (NULL);
	d = (unsigned char *)dest;
	s = (const unsigned char *)src;
	if (d > s && d < s + n)
		copy_backward(d, s, n);
	else
		copy_forward(d, s, n);
	return (dest);
}
