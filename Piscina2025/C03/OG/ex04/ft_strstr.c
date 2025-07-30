/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucmunoz <lucmunoz@student.42.madrid.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 17:38:40 by lucmunoz          #+#    #+#             */
/*   Updated: 2025/07/16 18:33:55 by lucmunoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (str[i] && !(str[i] == to_find[0]))
	{
		if (str[i] == to_find[0])
		{
			while (str[i] == to_find[j + 1])
			{
				i++;
				j++;
			}
		}
		i++;
	}
	return (&str[i]);
}
