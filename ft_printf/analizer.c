/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   analizer.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmorales <hmorales@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 09:27:25 by hmorales          #+#    #+#             */
/*   Updated: 2021/12/02 10:07:45 by hmorales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

char	analizer(const char *c)
{
	char			*s;
	unsigned int	i;

	s = (char *)c;
	if (!c || !(*s))
		return (NULL);
	i = 0;
	while (s[i] && s[i] != '%')
		i++;
	while (s[i] == 32)
		i++;
	if (s[i + 1] == "c" || s[i + 1] == "s" || s[i + 1] == "p" || \
	s[i + 1] == "d" || s[i + 1] == "i" || s[i + 1] == "u" || \
	s[i + 1] == "x" || s[i + 1] == "X" || s[i + 1] == '%')
		return (s[i + 1]);
	return (NULL);
}
