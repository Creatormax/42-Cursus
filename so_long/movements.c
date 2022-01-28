/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   movements.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmorales <hmorales@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 13:52:36 by hmorales          #+#    #+#             */
/*   Updated: 2022/01/28 18:07:58 by hmorales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	up(t_win **win)
{
	if (collider(win, (*win)->player_x, (*win)->player_y - 1) == 1)
	{	
		mlx_put_image_to_window((*win)->mlx, (*win)->mlx_win, (*win)->grass, \
		(*win)->player_x * 32, (*win)->player_y * 32);
		(*win)->player_y--;
		mlx_put_image_to_window((*win)->mlx, (*win)->mlx_win, (*win)->kirby, \
		(*win)->player_x * 32, (*win)->player_y * 32);
	}
}

void	down(t_win **win)
{
	if (collider(win, (*win)->player_x, (*win)->player_y + 1) == 1)
	{	
		mlx_put_image_to_window((*win)->mlx, (*win)->mlx_win, (*win)->grass, \
		(*win)->player_x * 32, (*win)->player_y * 32);
		(*win)->player_y++;
		mlx_put_image_to_window((*win)->mlx, (*win)->mlx_win, (*win)->kirby, \
		(*win)->player_x * 32, (*win)->player_y * 32);
	}
}

void	left(t_win **win)
{
	if (collider(win, (*win)->player_x - 1, (*win)->player_y) == 1)
	{
		mlx_put_image_to_window((*win)->mlx, (*win)->mlx_win, (*win)->grass, \
		(*win)->player_x * 32, (*win)->player_y * 32);
		(*win)->player_x--;
		mlx_put_image_to_window((*win)->mlx, (*win)->mlx_win, (*win)->kirby, \
		(*win)->player_x * 32, (*win)->player_y * 32);
	}
}

void	right(t_win **win)
{
	if (collider(win, (*win)->player_x + 1, (*win)->player_y) == 1)
	{
		mlx_put_image_to_window((*win)->mlx, (*win)->mlx_win, (*win)->grass, \
		(*win)->player_x * 32, (*win)->player_y * 32);
		(*win)->player_x++;
		mlx_put_image_to_window((*win)->mlx, (*win)->mlx_win, (*win)->kirby, \
		(*win)->player_x * 32, (*win)->player_y * 32);
	}
}
