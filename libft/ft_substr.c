/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmorales <hmorales@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 13:28:26 by hmorales          #+#    #+#             */
/*   Updated: 2021/11/15 12:44:13 by hmorales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	i;
	size_t	j;

	str = malloc((len + 1) * sizeof(*s));
	if (!s || !str)
		return (0);
	i = 0;
	j = 0;
	while (s[j])
	{
		if (j >= start && i < len)
			str[i++] = s[j];
		j++;
	}
	str[i] = 0;
	return (str);
}
