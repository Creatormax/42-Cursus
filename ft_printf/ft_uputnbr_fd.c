/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_uputnbr_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmorales <hmorales@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/05 20:35:11 by hmorales          #+#    #+#             */
/*   Updated: 2021/12/05 20:36:28 by hmorales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar_fd(char c, int fd);

void	ft_uputnbr_fd(unsigned int n, int fd)
{
	if (n <= 2147483647 || n > -2147483648)
	{
		if (n >= 10)
		{
			ft_uputnbr_fd(n / 10, fd);
			ft_putchar_fd(n % 10 + '0', fd);
		}
		else
		{
			ft_putchar_fd(n % 10 + '0', fd);
		}
	}
}