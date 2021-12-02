/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wanderer.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmorales <hmorales@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 10:33:22 by hmorales          #+#    #+#             */
/*   Updated: 2021/12/02 10:43:45 by hmorales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	wanderer(char decisions, ...)
{
	if (decisions == "c")
		ft_putchar_fd(..., 1);
	else if (decisions == "s")
		ft_putstr_fd(..., 1);
	else if (decisions == "p")
		ft_putstr_fd(&..., 1);
	else if (decisions == "d")
		ft_putnbr_fd(..., 1);
	else if (decisions == "i")
		ft_putnbr_fd(..., 1);
	else if (decisions == "u")
		ft_putnbr_fd(..., 1);
	else if (decisions == "x")
		ft_putnbr_fd(..., 1);
	else if (decisions == "X")
		ft_putnbr_fd(..., 1);
	else if (decisions == '%')
		ft_putchar_fd('%', 1);
}
