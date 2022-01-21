/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_render.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmorales <hmorales@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 14:35:05 by hmorales          #+#    #+#             */
/*   Updated: 2022/01/21 17:55:01 by hmorales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	dimensions_y(char **matrix)
{
	int	j;

	j = 0;
	while (matrix[j])
		j++;
	return (j);
}

char	**map_render(int map)
{
	char	**matrix;
	void	*mlx;
	void	*mlx_win;

	mlx = mlx_init();
	matrix = map_arranger(map);
	mlx_win = mlx_new_window(mlx, dimensions_x(matrix[0], 0) * 50 \
	, dimensions_y(matrix) * 50, "so_long");
	mlx_loop(mlx);
	return (matrix);
}
