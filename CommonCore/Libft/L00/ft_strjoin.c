/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lukitronix <lukitronix@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/01 17:52:38 by lukitronix        #+#    #+#             */
/*   Updated: 2025/10/02 17:46:00 by lukitronix       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

static char	*ft_allocate(size_t len)
{
	char	*src;

	src = (char *)malloc(sizeof(char) * (len + 1));
	if (!src)
		return (NULL);
	return (src);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	size_t	len;

	if (!s1 || !s2)
		return (NULL);
	len = ft_strlen(s1) + ft_strlen(s1) + ft_strlen(s2);
	str = ft_allocate(len);
	ft_strlcpy(str, s1, ft_strlen(s1) + 1);
	ft_strlcat(str, s2, len + 1);
	return (str);
}

/*char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	s1_len;
	size_t	s2_len;
	size_t	i;
	size_t	j;
	char	*src;

	if (!s1 || !s2)
		return (NULL);
	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	src = ft_allocate(s1_len + s2_len);
	i = 0;
	while (i < s1_len)
	{
		src[i] = s1[i];
		i++;
	}
	j = 0;
	while (j < s2_len)
	{
		src[i + j] = s2[j];
		j++;
	}
	src[i + j] = '\0';
	return (src);
}*/
