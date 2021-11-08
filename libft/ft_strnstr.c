/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmorales <hmorales@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 21:45:21 by hmorales          #+#    #+#             */
/*   Updated: 2021/11/08 16:14:58 by hmorales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s);

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	char	*b;
	char	*l;
	int		counter1;

	b = (char *)big;
	l = (char *)little;
	counter1 = -1;
	if (*l == '\0')
		return (b);
	while (*b++ != '\0' && len-- >= 0)
	{
		while (*b++ == *l++)
			++counter1;
		if (*l == '\0')
			return (&b[counter1 - ft_strlen(little)]);
		else
			l = (char *)little;
	}
	return (NULL);
}
