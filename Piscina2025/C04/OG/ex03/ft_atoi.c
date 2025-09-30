/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucmunoz <lucmunoz@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/20 14:54:55 by lucmunoz          #+#    #+#             */
/*   Updated: 2025/07/20 16:56:43 by lucmunoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_sign(char *sign)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (sign[i] == '+' || sign[i] == '-')
	{
		if (sign[i] == '-')
			count++;
		i++;
	}
	if (count % 2 == 0)
		return (0);
	else
		return (1);
}

char	ft_isspace(char space)
{
	if (space == 32)
		return (1);
	return (0);
}

int	ft_atoi(char *str)
{
	int	i;
	int	s;
	int	r;
	int	s_start;

	i = 0;
	r = 0;
	while (ft_isspace(str[i]))
	{
		i++;
	}
	s_start = i;
	while (str[i] == '+' || str[i] == '-')
	{
		i++;
	}
	s = ft_sign(&str[s_start]);
	while (str[i] >= '0' && str[i] <= '9')
	{
		r = r * 10 + (str[i] - '0');
		i++;
	}
	if (s == 1)
		r *= -1;
	return (r);
}

/*int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		printf("%d\n", ft_atoi(argv[1]));
	}
	return (0);
}*/
