/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_curator.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmorales <hmorales@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/05 19:33:38 by hmorales          #+#    #+#             */
/*   Updated: 2021/12/07 00:54:00 by hmorales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_curator(const char *decisions, int i, va_list (ap))
{
	if (decisions[i + 1] == 'c')
		ft_putchar_fd(va_arg(ap, int), 1);
	else if (decisions[i + 1] == 'i' || decisions[i + 1] == 'd')
		ft_putnbr_fd(va_arg(ap, int), 1);
	else if (decisions[i + 1] == 's')
		ft_putstr_fd(va_arg(ap, char *), 1);
	else if (decisions[i + 1] == 'u')
		ft_uputnbr_fd(va_arg(ap, unsigned int), 1);
	else if (decisions[i + 1] == '%')
		ft_putchar_fd('%', 1);
	else if (decisions[i + 1] == 'x')
		ft_putnbr_base(va_arg(ap, int), "0123456789abcdef", 1);
	else if (decisions[i + 1] == 'X')
		ft_putnbr_base(va_arg(ap, int), "0123456789ABCDEF", 1);
	else if (decisions[i + 1] == 'p')
	{
		write(1, "0x", 2);
		ft_putnbr_base(va_arg(ap, long int), "0123456789abcdef", 1);
	}
}
