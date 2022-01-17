/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmorales <hmorales@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/15 17:28:35 by hmorales          #+#    #+#             */
/*   Updated: 2022/01/17 17:41:44 by hmorales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>
# include "minilibx/mlx.h"
# include "libft/libft.h"

int		main(int argc, char **argv);
char	**map_arranger(int map);
void	map_render(int map);
int		dimensions_x(char *aux);
int		dimensions_y(char **matrix);

#endif