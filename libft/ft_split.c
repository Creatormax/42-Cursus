/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmorales <hmorales@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 16:18:52 by hmorales          #+#    #+#             */
/*   Updated: 2021/11/15 17:29:31 by hmorales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	analyzed(char const *s, char c)
{
	size_t	i;

	i = 0;
	while (*s != c)
	{
		s++;
		i++;
	}
	return (i);
}

char	**ft_split(char const *s, char c)
{
	char	**str;
	size_t	sep;
	size_t	i;

	sep = 0;
	i = 0;
	while (!s[i])
	{
		if (s[i] == c)
			sep++;
		i++;
	}
	str = (char **)malloc((sep + 1) * sizeof(char *));
	if (str == NULL)
		return (NULL);
	i = 0;
	while (i < sep)
	{
		str[i] = (char *)malloc((analyzed(s, c) + 1) * sizeof(char));
		if (str == NULL)
			return (NULL);
		ft_strlcpy(str[i], s, analyzed(s, c) + 1);
		i++;
	}
	return (str);
}
