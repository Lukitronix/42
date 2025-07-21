/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lukitronix <lukitronix@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/20 17:24:03 by lucmunoz          #+#    #+#             */
/*   Updated: 2025/07/21 19:15:29 by lukitronix       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	is_valid_base(char *base)
{
	int	i;
	int	j;

	if (ft_strlen(base) < 2)
		return (0);
	i = 0;
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-')
			return (0);
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	skip_spaces_and_signs(char *str, int *sign)
{
	int	i;

	i = 0;
	*sign = 1;
	while (str[i] == ' ')
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			*sign *= -1;
		i++;
	}
	return (i);
}

int	char_to_value(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (base[i] == c)
			return (i);
		i++;
	}
	return (-1);
}

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	s;
	int	r;
	int	v;
	int	base_len;

	if (!is_valid_base(base))
		return (0);
	i = skip_spaces_and_signs(str, &s);
	r = 0;
	base_len = ft_strlen(base);
	v = char_to_value(str[i], base);
	while (v != -1)
	{
		r = r * base_len + v;
		i++;
		v = char_to_value(str[i], base);
	}
	return (r * s);
}

/*int	main(void)
{
	printf("%d\n", ft_atoi_base("   --1e", "0123456789abcdef"));
	printf("%d\n", ft_atoi_base("  +1011", "01"));
	printf("%d\n", ft_atoi_base("7F", "0123456789ABCDEF"));
	printf("%d\n", ft_atoi_base("ZZ", "ABCDEFGHIJKLMNOPQRSTUVWXYZ"));
	return (0);
}*/
