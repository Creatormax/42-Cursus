/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmorales <hmorales@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 11:14:31 by hmorales          #+#    #+#             */
/*   Updated: 2021/11/07 11:30:05 by hmorales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	atoi(const char *nptr)
{
	const	char	*str;
	int				n;
	int				neg;

	str = nptr;
	neg = 1;
	while (*str++ == '-')
		neg *= -1;
	while (*str >= '0' && *str <= '9')
		n = (*str++ - '0') + (n * 10);
	if (*str < '0' || *str > '9')
		return (0);
	return (n * neg);	
}
