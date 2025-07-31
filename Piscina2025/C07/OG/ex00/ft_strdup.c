/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucmunoz <lucmunoz@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 18:51:45 by lucmunoz          #+#    #+#             */
/*   Updated: 2025/07/26 12:09:10 by lucmunoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *stc)
{
	int		i;
	char	*copy;

	copy = malloc(sizeof(char) * ft_strlen(stc));
	if (copy == NULL)
		return (NULL);
	i = 0;
	while (stc[i] != '\0')
	{
		copy[i] = stc[i];
		i++;
	}
	copy[i] = '\0';
	return (copy);
}

/*int	main(void)
{
	char source[] = "GeeksForGeeks";

	char* target = ft_strdup(source);

	printf("%s", target);
	return (0);
}*/
