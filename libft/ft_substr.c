/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmorales <hmorales@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 13:28:26 by hmorales          #+#    #+#             */
/*   Updated: 2021/11/12 16:27:34 by hmorales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (!s)
		return (NULL);
	str = (char *) malloc((len + 1) * sizeof(*s));
	if (!str)
		return (NULL);
	while (s[i])
	{
		if (start <= i && j < len)
			 str[j++] = s[i];
		i++;
	}
	str[j] = 0;
	return (str);
}
