/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_render.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmorales <hmorales@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 14:35:05 by hmorales          #+#    #+#             */
/*   Updated: 2022/01/24 19:07:39 by hmorales         ###   ########.fr       */
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

void	curator(t_win win, t_img img, char **matrix)
{
	if (matrix[win.y][win.x] == '1')
		mlx_put_image_to_window(win.mlx, win.mlx_win, img.tree, \
		win.x * 32, win.y * 32);
	else if (matrix[win.y][win.x] == 'C')
		mlx_put_image_to_window(win.mlx, win.mlx_win, img.metatomato, \
		win.x * 32, win.y * 32);
	else if (matrix[win.y][win.x] == 'E')
		mlx_put_image_to_window(win.mlx, win.mlx_win, img.exit, \
		win.x * 32, win.y * 32);
	else if (matrix[win.y][win.x] == 'P')
		mlx_put_image_to_window(win.mlx, win.mlx_win, img.kirby, \
		win.x * 32, win.y * 32);
}

void	painter(t_img img, t_win win, char **matrix)
{
	win.x = 0;
	win.y = 0;
	while (win.y < dimensions_y(matrix))
	{
		while (win.x < dimensions_x(matrix[0], 0))
		{
			mlx_put_image_to_window(win.mlx, win.mlx_win, img.grass, \
			win.x * 32, win.y * 32);
			win.x++;
		}
		win.x = 0;
		win.y++;
	}
	win.x = 0;
	win.y = 0;
	while (win.y < dimensions_y(matrix))
	{
		while (win.x < dimensions_x(matrix[0], 0))
		{
			curator(win, img, matrix);
			win.x++;
		}
		win.x = 0;
		win.y++;
	}
}

void	img_loader(t_win win, char **matrix)
{
	int		temp;
	t_img	img;

	img.grass = mlx_xpm_file_to_image(win.mlx_win, "img/grass.xpm", \
	&temp, &temp);
	img.exit = mlx_xpm_file_to_image(win.mlx_win, "img/exit.xpm", \
	&temp, &temp);
	img.kirby = mlx_xpm_file_to_image(win.mlx_win, "img/kirby.xpm", \
	&temp, &temp);
	img.metatomato = mlx_xpm_file_to_image(win.mlx_win, \
	"img/metatomato.xpm", &temp, &temp);
	img.tree = mlx_xpm_file_to_image(win.mlx_win, "img/tree.xpm", &temp, &temp);
	painter(img, win, matrix);
}

char	**map_render(int map)
{
	char	**matrix;
	t_win	win;

	win.mlx = mlx_init();
	matrix = map_arranger(map);
	win.mlx_win = mlx_new_window(win.mlx, dimensions_x(matrix[0], 0) * 32 \
	, dimensions_y(matrix) * 32, "so_long");
	img_loader(win, matrix);
	mlx_loop(win.mlx);
	return (matrix);
}
