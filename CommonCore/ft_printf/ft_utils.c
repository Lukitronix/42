/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucmunoz <lucmunoz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 16:45:24 by lucmunoz          #+#    #+#             */
/*   Updated: 2025/10/30 17:21:08 by lucmunoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_width(char *tag, char **cache)
{
	size_t	i;
	int		len;
	char	*width;

	i = 1;
	while (ft_strchr("#0- +", tag[i]))
		i++;
	if (i == ft_strlen(tag) - 1 || tag[i] == '.')
		return ;
	len = ft_atoi(&tag[i]) - ft_strlen(*cache);
	if (len <= 0)
		return ;
	ft_memset(width, ' ', len);
	cache = ft_strmerge(cache, width, !(!ft_strchr(tag, '-')));
	free(width);
}
void ft_precision(char *tag, char **cache, int nb)
{
	int		i;
	size_t	pres;
	char	*new;

	i = 1;
	while (ft_strchr("#0- +", tag[i]))
		i++;
	while (ft_isdigit(tag[i]))
		i++;
	if (tag[i] != '.')
		return ;
	pres = ft_atoi(&tag[i + 1]);
	if ((!nb && pres >= ft_strlen(*cache))
		|| ((*cache)[0] != '0' && nb && pres < ft_strlen(*cache)))
		return ;
	new = ft_calloc(pres + 1 + !(!ft_strchr(*cache, '-')), sizeof(char));
	if (!new)
		return ;
	if (nb && ft_strchr(*cache, '-'))
		new[0] = '-';
	ft_strlcpy(new + !(!pres) * (nb * (pres - ft_strlen(*cache) + 2
				* (new[0] == '-'))), *cache + (new[0] == '-'), pres + 1);
	free(*cache);
	*cache = new;
}
