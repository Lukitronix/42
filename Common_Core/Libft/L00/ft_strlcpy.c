/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucmunoz <lucmunoz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/29 20:10:05 by lucmunoz          #+#    #+#             */
/*   Updated: 2025/09/29 20:27:39 by lucmunoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

size_t  ft_strlcpy(char *dst, const char *src, size_t size)
{
    size_t  i;

    if (!dst || !src)
        return (0);
    i = 0;
    if (size != 0)
    {
        while (src[i] && i < size - 1)
        {
            dst[i] = src[i];
            i++;
        }
        dst[i] = '\0';
    }
    i = 0;
    while (src[i])
        i++;
    return (i);
}