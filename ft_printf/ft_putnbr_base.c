/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmorales <hmorales@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/05 20:44:35 by hmorales          #+#    #+#             */
/*   Updated: 2021/12/07 00:55:46 by hmorales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_putnbr_base(long int n, char *base, int fd)
{
	if (n < 0)
	{
		n = -n;
		ft_putchar_fd('-', fd);
		ft_putnbr_base(n, base, fd);
	}
	else if (n >= 10)
	{
		ft_putnbr_base(n / ft_strlen(base), base, fd);
		ft_putchar_fd(base[n % ft_strlen(base)], fd);
	}
	else
	{
		ft_putchar_fd(base[n % ft_strlen(base)], fd);
	}
}
