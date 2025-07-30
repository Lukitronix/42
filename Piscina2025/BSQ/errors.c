/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errors.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paulasanz <paulasanz@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/29 18:24:14 by paulasanz         #+#    #+#             */
/*   Updated: 2025/07/30 17:41:57 by paulasanz        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

void	ft_errors(void)
{
		write(2, "Error\n", 6);
		return;
}

int ft_free_map_error(t_map *map)
{
	write(2, "map error\n", 10);
	ft_free_map(map);
	return (0); // o NULL si lo usas como puntero
}
