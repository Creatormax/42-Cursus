/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_stuff.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmorales <hmorales@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/15 17:27:07 by hmorales          #+#    #+#             */
/*   Updated: 2022/01/21 11:12:01 by hmorales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	dimensions_x(char *aux)
{
	int	i;

	i = 0;
	while (aux[i] != '\0' && aux[i] != '\n')
		i++;
	return (i);
}

void	error_msgr(char *str)
{
	write(1, "Error\n", 6);
	write(1, str, dimensions_x(str));
	exit (1);
}

void	map_checker(char **matrix, int i, int j)
{
	int	k;

	k = 0;
	while (k <= i)
	{
		if (matrix[0][k] != 1 || matrix[j][k] != 1)
			error_msgr("This map has some holes in the walls");
	}
	k = 0;
	while (k <= j)
	{
		if (matrix[k][0] != 1 || matrix[k][i] != 1)
			error_msgr("This map has some holes in the walls");
	}
}

void	map_checker2(char **matrix, int i, int j)
{
	int	k;
	int	l;
	int	err[3];

	k = 0;
	l = 0;
	ft_bzero(err, 3);
	while (k <= j)
	{
		while (l <= i)
		{
			if (matrix[k][l] == 'E')
				err[0] = 1;
			if (matrix[k][l] == 'C')
				err[1] = 1;
			if (matrix[k][l] == 'P')
				err[2] = 1;
		}
	}
	if (err[0] == 1)
		error_msgr("There is no exit");
	else if (err[1] == 1)
		error_msgr("There are no collectables");
	else if (err[2] == 1)
		error_msgr("There is no starting point");
}

char	**map_arranger(int map)
{
	char	**matrix;
	char	*aux;
	int		i;
	int		j;

	j = 0;
	aux = get_next_line(map);
	i = dimensions_x(aux);
	if (i < 3)
		error_msgr("The map is smaller than a 3x3");
	if (aux[0] != 1)
		error_msgr("The map is not surrounded by walls");
	matrix = ft_calloc(1, sizeof(char *) * i);
	matrix[j++] = aux;
	while (aux)
	{
		aux = get_next_line(map);
		if (dimensions_x(aux) != i)
			error_msgr("This map is not a rectangle");
		matrix = (char **) ft_realloc(matrix, sizeof(char *) * i * j);
		matrix[j++] = aux;
	}
	map_checker(matrix, i, j);
	map_checker2(matrix, i, j);
	return (matrix);
}
