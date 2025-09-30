/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucmunoz <lucmunoz@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 19:20:46 by lucmunoz          #+#    #+#             */
/*   Updated: 2025/07/14 19:43:16 by lucmunoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

char	*ft_strlowcase(char *str)
{
	int	b;

	b = 0;
	while (str[b])
	{
		if (str[b] >= 'A' && str[b] <= 'Z')
			str[b] += 32;
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	n;

	ft_strlowcase(str);
	i = 0;
	n = 1;
	while (str[i])
	{
		if ((str[i] >= 'a' && str[i] <= 'z') && n)
			str[i] -= 32;
		n = !((str[i] >= 'a' && str[i] <= 'z')
				|| (str[i] >= 'A' && str[i] <= 'Z')
				|| (str[i] >= '0' && str[i] <= '9'));
		i++;
	}
	return (str);
}
