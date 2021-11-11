/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmorales <hmorales@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 20:58:10 by hmorales          #+#    #+#             */
/*   Updated: 2021/11/11 11:08:14 by hmorales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*str;

	str = (char *)s;
	if (ft_strchr(str, c) == NULL)
		return (NULL);
	while (*str)
		str++;
	while (*str != c)
		str--;
	return (str);
}
