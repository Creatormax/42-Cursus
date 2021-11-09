/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmorales <hmorales@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 11:14:31 by hmorales          #+#    #+#             */
/*   Updated: 2021/11/09 12:25:28 by hmorales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	char	*str;
	int		n;
	int		neg;
	int		sign;

	str = (char *)nptr;
	neg = 1;
	sign = 0;
	while ((*str <= '\r' && *str >= '\t') || *str == ' ')
		str++;
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			neg *= -1;
		str++;
		sign++;
	}
	if (sign > 1)
		return (0);
	while (*str >= '0' && *str <= '9')
		n = (*str++ - '0') + (n * 10);
	return (n * neg);
}
