/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmorales <hmorales@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 16:25:51 by hmorales          #+#    #+#             */
/*   Updated: 2021/11/06 16:37:08 by hmorales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

size_t	ft_strlen(const char *s);

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	char			*d;
	const	char	*s;

	d = dest;
	s = src;
	while ((size-- > 0) && (*d != '\0'))
		*d++;
	while (*s != '\0')
		*d++ = *s++;
	return (ft_strlen(dest));
}
