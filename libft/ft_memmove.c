/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmorales <hmorales@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 20:59:36 by hmorales          #+#    #+#             */
/*   Updated: 2021/11/08 16:16:42 by hmorales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
    char	*d;
	char	*s;
	char	*endd;
	char	*ends;

	d = dest;
	s = (char *)src;
	if (d < s)
	{
		while (n-- > 0)
			*d++ = *s++;
	}
	else
	{
		ends = s + (n - 1);
		endd = d + (n - 1);
		while (n-- > 0)
			*endd-- = *ends--;
	}
	return (dest);  
}