/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexpoint.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmorales <hmorales@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 19:24:40 by hmorales          #+#    #+#             */
/*   Updated: 2021/12/08 19:42:32 by hmorales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_hexpoint(unsigned long arg, int total)
{
	if (arg == 0)
		total = ft_putstr_fd("(nil)", 1, total);
	else
	{
		total = ft_putstr_fd("0x", 1, total);
		ft_putnbr_base(arg, "0123456789abcdef", 16);
		total += ft_intlen(arg, 16);
	}
	return (total);
}
