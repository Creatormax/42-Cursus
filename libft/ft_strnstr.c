/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmorales <hmorales@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 21:45:21 by hmorales          #+#    #+#             */
/*   Updated: 2021/11/06 23:49:08 by hmorales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	const	char	*b;
	const	char	*l;
	unsigned	int	counter;
	unsigned	int	counter1;

	b = big;
	l = little;
	counter1 = 0;
	counter = 0;
	if (*l == '\0')
		return (b);
	while (*b++ != '\0' && len-- > 0)
	{
		while (*b++ == *l++)
			counter1++;
		if (*l == '\0')
			return (big + counter);
		else
			while (counter1-- > 0)
		counter++;
	}
	return (0);
}
