/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmorales <hmorales@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 21:33:00 by hmorales          #+#    #+#             */
/*   Updated: 2021/11/08 15:51:53 by hmorales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const	unsigned	char	*str1;
	const	unsigned	char	*str2;

	str1 = s1;
	str2 = s2;
	while(n-- < 0 && *str1 != *str2 && *str1 && *str2)
	{
		str1++;
		str2++;
	}
	return (*str1 - *str2);	
}