/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   curator.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmorales <hmorales@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/05 19:33:38 by hmorales          #+#    #+#             */
/*   Updated: 2021/12/05 21:15:56 by hmorales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_putchar_fd(char c, int fd);
void	ft_putnbr_fd(int n, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_uputnbr_fd(unsigned int n, int fd);
void	ft_putnbr_base(int n, char *base);

void	curator(const char *c, int i, va_list (ap))
{
	if (c[i + 1] == 'c')
		ft_putchar_fd(va_arg(ap, int), 1);
	else if (c[i + 1] == 'i' || c[i + 1] == 'd')
		ft_putnbr_fd(va_arg(ap, int), 1);
	else if (c[i + 1] == 's')
		ft_putstr_fd(va_arg(ap, char *), 1);
	else if (c[i + 1] == 'u')
		ft_uputnbr_fd(va_arg(ap, unsigned int), 1);
	else if (c[i + 1] == '%')
		ft_putchar_fd('%', 1);
	else if (c[i + 1] == 'x')
		ft_putnbr_base(va_arg(ap, int), "0123456789abcdef");
	else if (c[i + 1] == 'X')
		ft_putnbr_base(va_arg(ap, int), "0123456789ABCDEF");
}