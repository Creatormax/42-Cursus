/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tester.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmorales <hmorales@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/05 19:23:48 by hmorales          #+#    #+#             */
/*   Updated: 2021/12/05 20:57:19 by hmorales         ###   ########.fr       */
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
	aux1 = 789;
	aux2 = ", pos si que funciona jeje";
	printf("lol haber %ci esto fucniona %x\n", aux);
	ft_printf("lol haber %ci esto fucniona %x", aux);
}