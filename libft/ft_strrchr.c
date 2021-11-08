/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmorales <hmorales@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 20:58:10 by hmorales          #+#    #+#             */
/*   Updated: 2021/11/08 15:32:34 by hmorales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s);

char	*ft_strrchr(const char *s, int c)
{
	size_t n;
	
	n = ft_strlen(s);
	while (n > 0 && s[n] != c)
		n--;
	if (n == 0)
		return (0);
	return ((char*)s);
}
