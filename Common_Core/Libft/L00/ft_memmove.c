/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucmunoz <lucmunoz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/29 19:52:37 by lucmunoz          #+#    #+#             */
/*   Updated: 2025/09/29 20:09:22 by lucmunoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void    *ft_memmove(void *dest, const void *src, size_t n)
{
    size_t  i;
    unsigned char   *d;
    const unsigned char *s;

    d = (unsigned char *)dest;
    s = (const unsigned char *)src;
    if (!dest && !src)
        return NULL;
    if (d > s && d < s + n)
    {
        i = n;
        while (i > 0)
        {
            d[i - 1] = s[i - 1];
            i--;
        }
    }
    else
    {
        i = 0;
        while (i < n)
        {
            d[i] = s[i];
            i++;
        }
    }
    return dest;
}