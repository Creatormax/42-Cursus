/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   counter.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmorales <hmorales@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 10:05:15 by hmorales          #+#    #+#             */
/*   Updated: 2021/12/02 10:22:31 by hmorales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

unsigned int	counter(const char *c)
{
	unsigned int	i;
	unsigned int	j;

	j = 0;
	i = 0;
	while (c[i])
	{
		if (c[i] == '%')
		{
			if (c[i + 1] == 32)
			{
				while (c[i + 1] == 32)
					i++;
			}
			if (c[i + 1] == '%')
				j --;
			j++;
		}
		i++;
	}
	return (j);
}
