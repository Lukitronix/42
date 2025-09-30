/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucmunoz <lucmunoz@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/20 16:58:15 by lucmunoz          #+#    #+#             */
/*   Updated: 2025/07/20 20:37:56 by lucmunoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	ft_ver_base(char *base)
{
	int	i;
	int	j;

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
	if (i <= 1)
		return (0);
	return (1);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

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

	i = 0;
	if (ft_strlen(base) < 2)
		return (0);
	while (base[i])
	{
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

void	ft_putnbr_base(int nbr, char *base)
{
	int		base_len;
	long	nb;

	if (!ft_ver_base(base))
		return ;
	base_len = ft_strlen(base);
	nb = nbr;
	if (!is_valid_base(base))
		return ;
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	if (nb >= base_len)
		ft_putnbr_base(nb / base_len, base);
	ft_putchar(base[nb % base_len]);
}

/*int	main(void)
{
	ft_putnbr_base(42, "0123456789");
	write(1, "\n", 1);
	ft_putnbr_base(42, "01");
        write(1, "\n", 1);
	ft_putnbr_base(42, "0123456789ABCDEF");
        write(1, "\n", 1);
	ft_putnbr_base(42, "poniguay");
        write(1, "\n", 1);
		ft_putnbr_base(-42, "0123456789");
	write(1, "\n", 1);

	ft_putnbr_base(10, "001");
	write(1, "\n", 1);
	ft_putnbr_base(10, "0");
	write(1, "\n", 1);
        ft_putnbr_base(10, "1");
        write(1, "\n", 1);
        ft_putnbr_base(10, "2");
        write(1, "\n", 1);
        ft_putnbr_base(10, "3");
        write(1, "\n", 1);
}*/
