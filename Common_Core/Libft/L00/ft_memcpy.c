/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucmunoz <lucmunoz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/29 19:33:54 by lucmunoz          #+#    #+#             */
/*   Updated: 2025/09/29 19:50:15 by lucmunoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void    *ft_memcpy(void *dest, const void *src, size_t n)
{
    size_t  i;
    unsigned char   *u;
    const unsigned char *s;

    i = 0;
    u = (unsigned char *)dest;
    s = (const unsigned char *)src;
    while (i < n)
    {
        u[i] = s[i];
        i++; 
    }
    reutrn (dest);
}