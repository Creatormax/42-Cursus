/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmorales <hmorales@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 16:03:47 by hmorales          #+#    #+#             */
/*   Updated: 2021/11/06 16:55:34 by hmorales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

size_t	ft_strlen(const char *s);

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	char			*d;
	const	char	*s;

	d = dest;
	s = src;
	while ((size-- > 0) && (*s != '\0'))
		*d++ = *s++;
	while (size-- > 0)
		*d++ = '\0';	
	return (ft_strlen(dest));
}
