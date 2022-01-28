/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   character.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmorales <hmorales@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 19:41:18 by hmorales          #+#    #+#             */
/*   Updated: 2022/01/28 18:04:17 by hmorales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	terminator(int keycode, void *win)
{
	(void)keycode;
	(void)win;
	exit (0);
}

int	collider(t_win **win, int ny, int nx)
{
	if ((*win)->matrix[ny][nx] == '1')
		return (0);
	return (1);
}

int	key_hook(int keycode, void *win)
{
	t_win	*lol;

	lol = (t_win *)win;
	if (keycode == 53)
	{
		mlx_destroy_window(lol->mlx, lol->mlx_win);
		exit (0);
	}
	if (keycode == 13 || keycode == 126)
		up(&lol);
	if (keycode == 1 || keycode == 125)
		down(&lol);
	if (keycode == 0 || keycode == 123)
		left(&lol);
	if (keycode == 2 || keycode == 124)
		right(&lol);
	return (0);
}
