/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmorales <hmorales@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/15 17:28:38 by hmorales          #+#    #+#             */
/*   Updated: 2022/01/24 19:46:27 by hmorales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	main(int argc, char **argv)
{
	char	**matrix;
	int		j;

	j = 0;
	if (argc < 2)
		return (0);
	matrix = map_render(open(argv[1], O_RDONLY));
	character(matrix);
	return (0);
}
