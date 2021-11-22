/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmorales <hmorales@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 21:45:21 by hmorales          #+#    #+#             */
/*   Updated: 2021/11/22 10:47:53 by hmorales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	j;
	char	*b;
	char	*l;

	if (!big || !little)
		return (NULL);
	j = 0;
	l = (char *)little;
	b = (char *)big;
	if (!b || !l || len == 0)
		return (b);
	while (*b != 0 && len--)
	{
		while (b[j] == l[j] && b[j] && l[j] && j < len)
			j++;
		if (l[j] == 0)
			return (b);
		if (j != 0)
			b--;
		j = 0;
		b++;
	}
	return (0);
}
