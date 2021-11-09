/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmorales <hmorales@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 21:10:35 by hmorales          #+#    #+#             */
/*   Updated: 2021/11/09 14:23:07 by hmorales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*cpy;

	cpy = (char *) malloc(ft_strlen(s));
	if (cpy == NULL)
		return (0);
	ft_memcpy(cpy, s, ft_strlen(s));
	return (cpy);
}
