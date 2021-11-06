/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmorales <hmorales@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 21:45:21 by hmorales          #+#    #+#             */
/*   Updated: 2021/11/06 22:12:05 by hmorales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	const	char	*b;
	const	char	*l;
	int				counter;

	b = big;
	l = little;
	counter = 0;
	if (*l == '\0')
		return (b);
	while (*b++ != '\0' && len-- > 0)
	{
		while (*b++ == *l++)
		if (*l == '\0')
			return (big + counter);
		else
			
		counter++;
	}
	return (0);
}
