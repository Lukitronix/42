/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucmunoz <lucmunoz@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/26 18:36:12 by lucmunoz          #+#    #+#             */
/*   Updated: 2025/07/30 20:07:33 by lucmunoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

int	ft_totallen(int size, char **str, char *sep)
{
	int	i;
	int	len;

	i = 0;
	len = 0;
	while (i < size)
	{
		len += ft_strlen(str[i]);
		if (i < size - 1)
			len += ft_strlen(sep);
		i++;
	}
	return (len);
}

void	ft_res(char *res, int size, char **str, char *sep)
{
	int	i;
	int	j;
	int	pos;

	i = 0;
	pos = 0;
	while (i < size)
	{
		j = 0;
		while (str[i][j])
			res[pos++] = str[i][j++];
		if (i < size - 1)
		{
			j = 0;
			while (sep[j])
				res[pos++] = sep[j++];
		}
		i++;
	}
	res[pos] = '\0';
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		len;
	char	*res;

	if (size <= 0)
	{
		res = (char *)malloc(1);
		if (res)
			res = NULL;
		return (res);
	}
	len = ft_totallen(size, strs, sep);
	res = (char *)malloc(len + 1);
	if (!res)
		return (NULL);
	ft_res(res, size, strs, sep);
	return (res);
}

/*int	main(void)
{
	char	*str[] = {"Hello", "World", "42"};
	char	*sep = ", cg ";
	char	*result;

	result = ft_strjoin(3, str, sep);
	if (result)
	{
		printf("%s\n", result);
		free(result);
	}
	else
	{
		printf("malloc failed\n");
	}
	return (0);
}*/
