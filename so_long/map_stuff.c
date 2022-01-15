/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_stuff.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmorales <hmorales@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/15 17:27:07 by hmorales          #+#    #+#             */
/*   Updated: 2022/01/15 20:24:33 by hmorales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	dimensions(char *aux)
{
	int	i;

	i = 0;
	while (aux[i] != '\0' && aux[i] != '\n')
		i++;
	return (i);
}

int	map_checker(char **matrix, int i, int j)
{
	int	k;

	k = 0;
	while (k <= i)
	{
		if (matrix[0][k] != 1 || matrix[j][k] != 1)
			return (1);// tengo que hacerme una funcion para los mensajes de errores
	}// no esta rodeada de unos
	k = 0;
	while (k <= j)
	{
		if (matrix[k][0] != 1 || matrix[k][i] != 1)
			return (1);//no esta rodeada de unos
	}
}

int	map_checker2(char **matrix, int i, int j)
{
	int	k;
	int	l;
	int	err;

	k = 0;
	l = 0;
	err = 1;
	while (k <= j)
	{
		while (l <= i)
		{
			if (matrix[k][l] == 'E')
				err = 0;//No hay salida
			if (matrix[k][l] == 'C')
				err = 0;//No hay coleccionables
			if (matrix[k][l] == 'P')
				err = 0;//No hay punto de entrada
		}
	}
}

void	map_arranger(int map)
{
	char	**matrix;
	char	*aux;
	int		i;
	int		j;
	int		err;

	j = 0;
	i = dimensions(aux);
	if (i < 3)
		return ;//mapa de dimensiones erroneas
	aux = get_next_line(map);
	if (aux[0] != 1)
	matrix = ft_calloc(1, sizeof(char *) * i);
	matrix[j++] = aux;
	while (aux)
	{
		aux = get_next_line(map);
		if (dimensions(aux) != i)
			return ;//este mapa no es un rectangulo
		matrix = (char **) ft_realloc(matrix, sizeof(char *) * i * j);
		matrix[j++] = aux;
	}
	err = map_checker(matrix, i, j);
}
