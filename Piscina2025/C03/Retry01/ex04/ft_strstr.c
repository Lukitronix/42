/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucmunoz <lucmunoz@student.42.madrid.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 17:38:40 by lucmunoz          #+#    #+#             */
/*   Updated: 2025/07/17 18:08:54 by lucmunoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_lol(char *a, char *b, int s)
{
	int	j;

	j = 0;
	while (b[j])
	{
		if (b[j] != a[s + j])
			return (0);
		j++;
	}
	return (1);
}

char	*ft_strstr(char *str, char *to_find)
{
	int	i;

	i = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[i])
	{
		if (ft_lol(str, to_find, i))
			return (&str[i]);
		i++;
	}
	return (0);
}

/*int	main(void)
{
	char	src[] = "hola me llamo Lucas";
	char	find[] = "ll";
	char	*strr = ft_strstr(src, find);
	printf("%s\n", strr);
}*/
