/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmorales <hmorales@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 21:10:35 by hmorales          #+#    #+#             */
/*   Updated: 2021/11/08 18:45:42 by hmorales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s);

char	*ft_strdup(const char *s)
{
	char	*str;
	char	*cpy;

	str = (char *)s;
	cpy = (char *) malloc(ft_strlen(s) * sizeof(char));
	while (*str != '\0')
		*cpy++ = *str++;
	if (cpy == NULL)
		return (0);
	return (cpy);
}