/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dic_analisis.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucmunoz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/26 12:57:04 by lucmunoz          #+#    #+#             */
/*   Updated: 2025/07/26 14:14:33 by lucmunoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>

char	*ft_append(char *old, char *add, int size)
{
	int		i;
	int		j;
	char	*new;

	i = 0;
	while (old && old[i])
		i++;
	new = malloc(i + size + 1);
	if (!new)
		return (0);
	j = 0;
	while (j < i)
	{
		new[j] = old[j];
		j++;
	}
	j = 0;
	while (j < size)
	{
		new[i + j] = add[j];
		j++;
	}
	new[i + j] = '\0';
	free(old);
	return (new);
}

char	*ft_read_dic(char *name)
{
	int		d;
	int		size;
	char	*text;
	char	buf;

	text = NULL;
	d = open(name, O_RDONLY);
	if (d < 0)
		return (0);
	size = read(d, buf, 1024);
	while (size > 0)
	{
		text = ft_append(text, buf, size)
		if (!text)
			return (0);
		size = read(d, buf, 1024);
	}
	close(d);
	return (text);
}

char	**ft_anls_dict(char *text)
{
	(void)text;
	// analizar dicionario linea por linea
	// devolvera un array de lneas (char **)
	return (0);
}

char	**ft_send_dict(char *file)
{
	char	*all;
	char	**lines;

	all = ft_read_dic(file);
	if (!all)
		return (0);
	lines = ft_anls_dict(all);
	free(all);
	return (lines);
}
