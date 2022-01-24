/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmorales <hmorales@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/15 17:28:35 by hmorales          #+#    #+#             */
/*   Updated: 2022/01/24 17:42:54 by hmorales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

# include <stdlib.h>
# include <stdio.h>
# include <unistd.h>
# include <fcntl.h>
# include "mlx/mlx.h"
# include "libft/libft.h"

typedef struct img
{
	void	*grass;
	void	*kirby;
	void	*tree;
	void	*metatomato;
	void	*exit;
}	t_img;

typedef struct win
{
	void	*mlx;
	void	*mlx_win;
	int		x;
	int		y;
}	t_win;

int		main(int argc, char **argv);
char	**map_arranger(int map);
char	**map_render(int map);
int		dimensions_x(char *aux, int j);
int		dimensions_y(char **matrix);
char	*gnl_no_lb(int map);
void	matrix_printer(int j, char **matrix);

#endif