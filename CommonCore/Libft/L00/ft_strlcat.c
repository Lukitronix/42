/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lukitronix <lukitronix@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/29 20:30:28 by lucmunoz          #+#    #+#             */
/*   Updated: 2025/09/30 17:31:21 by lucmunoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdio.h>

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	sl;
	size_t	dl;

	i = 0;
	j = 0;
	sl = 0;
	dl = 0;
	while (dst[dl])
		dl++;
	while (src[sl])
		sl++;
	if (size <= dl)
		return (size + sl);
	i = dl;
	while (src[j] && i < size - 1)
		dst[i++] = src[j++];
	dst[i] = '\0';
	return (dl + sl);
}
