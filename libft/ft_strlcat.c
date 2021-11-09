/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmorales <hmorales@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 16:25:51 by hmorales          #+#    #+#             */
/*   Updated: 2021/11/09 14:34:37 by hmorales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	char		*d;
	const char	*s;

	d = dest;
	s = src;
	while ((size-- > 0) && (*d++ != '\0'))
	{
	}
	while (*s != '\0')
		*d++ = *s++;
	return (ft_strlen(dest));
}
