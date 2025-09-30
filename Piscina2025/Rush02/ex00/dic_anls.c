/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dic_anls.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucmunoz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/26 15:47:12 by lucmunoz          #+#    #+#             */
/*   Updated: 2025/07/26 16:06:32 by lucmunoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	ft_count_lines(char *str)
{
	int	i;
	int	n;

	i = 0;
	n = 0;
	while (str[i])
	{
		if (str[i] == '\n')
			n++;
		i++;
	}
	return (n + 1);
}

char	*ft_copy_lines(char *str, int *index)
{
	char	*line;
	int		i;
	int		len;

	len = 0;
	while (str[*pos + len] && str[*pos + len] != '\n')
		len++;
	line = malloc(len + 1);
	if (!line)
		return (0);
	i = 0;
	while (i < len)
	{
		line[i] = str[*pos];
		(*pos)++;
		i++;
	}
	if (str[*pos] == '\n')
		(*pos)++;
	line[i] = '\0';
	return (line);
}

char	**ft_anls_dict(char *text)
{
	int		lines;
	int		i;
	int		pos;
	char	**tab;

	lines = ft_count_lines(text);
	tab = malloc(sizeof(char *) * (lines + 1));
	if (!tab)
		return (0);
	i = 0;
	pos = 0;
	while (i < lines)
	{
		tab[i] = ft_copy_line(text, &pos);
		i++;
	}
	tab[i] = 0;
	return (tab);
}
