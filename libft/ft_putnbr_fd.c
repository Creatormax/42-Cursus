/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmorales <hmorales@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 22:27:32 by hmorales          #+#    #+#             */
/*   Updated: 2021/11/17 22:42:39 by hmorales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int	i;
	unsigned int	max;
	char			c;

	i = 0;
	max = ft_strlen(ft_itoa(n));
	if (n > 2147483647 || n < -2147483648)
		return ;
	if (n < 0)
	{
		write(fd, "-", 1);
		i++;
	}
	while (max > i++)
	{
		c = (n % 10) + '0';
		write(fd, &c, 1);
		n /= 10;
	}
}
