/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucmunoz <lucmunoz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/29 18:27:54 by lucmunoz          #+#    #+#             */
/*   Updated: 2025/09/29 19:25:56 by lucmunoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char    *ft_memset(void  *s, int c, size_t n)
{
    size_t  i;
    unsigned char   *u;

    i = 0;
    u = (unsigned char *)s;
    while (i < n)
    {
        u[i] = (unsigned char)c;
        i++;
    }
    return (s);
}