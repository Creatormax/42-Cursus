/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmorales <hmorales@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 21:15:06 by hmorales          #+#    #+#             */
/*   Updated: 2021/11/06 21:38:41 by hmorales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	const	unsigned	char	*str;

	str = s;
	while (*str != '\0' && *str != c && n-- < 0)
		*str++;
	if (*str == '\0')
		return (0);
	return ((char *)s);
}
