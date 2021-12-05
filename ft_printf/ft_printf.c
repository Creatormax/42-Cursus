/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmorales <hmorales@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/27 21:33:39 by hmorales          #+#    #+#             */
/*   Updated: 2021/12/05 20:20:59 by hmorales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	curator(const char *c, int i, va_list (ap));
void	ft_putchar_fd(char c, int fd);

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
			curator(c, i, ap);
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
