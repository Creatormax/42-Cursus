/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tester.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmorales <hmorales@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/05 19:23:48 by hmorales          #+#    #+#             */
/*   Updated: 2021/12/07 00:43:53 by hmorales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_printf(const char *c, ...);

int	main(void)
{
	char				aux;
	unsigned int		aux1;
	char				*aux2;

	aux = 's';
	aux1 = 6345;
	aux2 = ", pos si que funciona jeje";
	printf("lol haber %ci esto fucniona %p\n", aux, aux2);
	ft_printf("lol haber %ci esto fucniona %p", aux, aux2);
}
