/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lukitronix <lukitronix@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/02 18:03:52 by lukitronix        #+#    #+#             */
/*   Updated: 2025/10/06 16:30:39 by lukitronix       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count(char const *s, char c)
{
	int	i;
	int	iw;

	i = 0;
	iw = 0;
	while (*s)
	{
		if (*s != c && iw == 0)
		{
			iw = 1;
			i++;
		}
		else if (*s == c)
			iw = 0;
		s++;
	}
	return (i);
}

static void	*ft_free(char **res)
{
	int	i;

	i = 0;
	while (res[i])
		free(res[i++]);
	free(res);
	return (NULL);
}

static int	ft_addword(char **res, char const *s, int *i, char c)
{
	int	start;

	start = *i;
	while (s[*i] && s[*i] != c)
		(*i)++;
	res[0] = ft_substr(s, start, *i - start);
	if (!res[0])
		return (0);
	return (1);
}

char	**ft_split(char const *s, char c)
{
	char	**res;
	int		i;
	int		j;

	if (!s)
		return (NULL);
	res = malloc(sizeof(char *) * (ft_count(s, c) + 1));
	if (!res)
		return (NULL);
	i = 0;
	j = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i] && !ft_addword(&res[j++], s, &i, c))
			return (ft_free(res));
	}
	res[j] = NULL;
	return (res);
}
