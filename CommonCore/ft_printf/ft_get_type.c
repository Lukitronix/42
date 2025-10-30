/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_type.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucmunoz <lucmunoz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 16:25:57 by lucmunoz          #+#    #+#             */
/*   Updated: 2025/10/30 17:22:06 by lucmunoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_get_string(va_list *args, char *tag, char **cache)
{
	char	*str;

	str = va_arg(*args, char *);
	if (!str)
		str = "(null)";
	*cache = ft_calloc(ft_strlen(str) + 1, sizeof(char));
	if (!(*cache))
		return ;
	ft_strlcpy(*cache, str, ft_strlen(str) + 1);
	ft_precision(tag, cache, 0);
	ft_width(tag, cache);
}