/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmorales <hmorales@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 13:28:26 by hmorales          #+#    #+#             */
/*   Updated: 2021/11/11 13:43:18 by hmorales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;

	if (!s)
		return (NULL);
	str = (char *) malloc(len * sizeof(*s));
	if (str == NULL)
		return (NULL);
	while (start < len)
	{
		str[start] = s[start];
		start++;
	}
	str[start] = 0;
	return (str);
}
