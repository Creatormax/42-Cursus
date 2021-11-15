/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmorales <hmorales@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 11:14:31 by hmorales          #+#    #+#             */
/*   Updated: 2021/11/15 12:42:53 by hmorales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	char	*str;
	int		n;
	int		neg;

	str = (char *)nptr;
	neg = 1;
	while ((*str <= '\r' && *str >= '\t') || *str == ' ')
		str++;
	if (*str == '+' || *str == '-')
	{
		if (*str++ == '-')
			neg *= -1;
	}
	while (*str >= '0' && *str <= '9')
		n = (*str++ - '0') + (n * 10);
	return (n * neg);
}
