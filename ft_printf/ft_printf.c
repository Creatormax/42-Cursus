/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmorales <hmorales@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/27 21:33:39 by hmorales          #+#    #+#             */
/*   Updated: 2021/12/07 00:54:08 by hmorales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_printf(const char *c, ...)
{
	va_list	ap;
	int		i;

	i = 0;
	va_start(ap, c);
	while (c[i] != '\0')
	{
		if (c[i] == '%')
		{
			ft_curator(c, i, ap);
			i += 2;
		}
		else
		{
			ft_putchar_fd(c[i], 1);
			i++;
		}	
	}
	va_end(ap);
	return (i);
}
