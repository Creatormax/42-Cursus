/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_render.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmorales <hmorales@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 14:35:05 by hmorales          #+#    #+#             */
/*   Updated: 2022/01/17 15:48:14 by hmorales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	dimensions_y(char **matrix)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (matrix[j][i] != '\0')
	{
		if (matrix[j][i] != '\n')
		{
			j++;
			i = 0;
		}
		i++;
	}
	return (j);
}

void	map_render(int map)
{
	char	**matrix;
	void	*mlx;
	void	*mlx_win;

	mlx = mlx_init();
	matrix = map_arranger(map);
	mlx_win = mlx_new_window(mlx, dimensions_x(matrix[0]) \
	, dimensions_y(matrix), "so_long");
	mlx_loop(mlx);
}
