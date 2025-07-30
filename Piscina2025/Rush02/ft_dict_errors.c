/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dict_errors.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpascua- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/26 17:41:41 by rpascua-          #+#    #+#             */
/*   Updated: 2025/07/26 23:10:24 by rpascua-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	ft_dict(char **str, int lines)
{
	if (ft_dict_validate(str, lines))
		return (ft_dict_format_num(str, lines));
	else
	{
		write(1, "Dict Error\n", 11);
		return ;
	}
}

char	ft_dict_format_num(char **str, int lines)
{
	char	**dest;
	int		i;
	int		j;

	i = 0;
	while (i < lines)
	{
		j = 0;
		while (str[i][j] >= 48 && str[i][j] <= 57)
		{
			dest[i][j] = str[i][j];
			j++;
		}
		i++;
	}
	return (dest);
}

int	ft_dict_validate(char **str, int lines)
{
	int	i;
	int	j;

	i = 0;
	while (i < lines)
	{
		j = 0;
		if (!(str[i][j] > 47 && str[i][j] < 58))
			return (0);
		while (str[i][j] > 47 && str[i][j] < 58)
			j++;
		while (str[i][j] == 32)
			j++;
		if (!(str[i][j] == 58))
			return (0);
		while (str[i][j] == 32)
			j++;
		if (str[i][j] > 31 || str[i][j] < 127)
			j++;
		else
			return (0);
		i++;
	}
	return (1);
}
