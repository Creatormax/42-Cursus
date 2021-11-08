/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmorales <hmorales@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 17:14:41 by hmorales          #+#    #+#             */
/*   Updated: 2021/11/08 17:14:54 by hmorales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



int		main(int argc, const char *argv[])
{
	void	*mem;
	int		arg;

	alarm(5);
	if (!(mem = malloc(sizeof(*mem) * 15)) || argc == 1)
		return (0);
	memset(mem, 'j', 15);
	if ((arg = atoi(argv[1])) == 1)
	{
		if (mem != ft_memset(mem, 'c', 5))
			write(1, "mem's adress was not returned\n", 30);
		write(1, mem, 15);
	}
	else if (arg == 2)
	{
		if (mem != ft_memset(mem, 'c', 14))
			write(1, "mem's adress was not returned\n", 30);
		write(1, mem, 15);
	}
	else if (arg == 3)
	{
		if (mem != ft_memset(mem, '\n', 6))
			write(1, "mem's adress was not returned\n", 30);
		write(1, mem, 15);
	}
	else if (arg == 4)
	{
		if (mem != ft_memset(mem, '\0', 1))
			write(1, "mem's adress was not returned\n", 30);
		write(1, mem, 15);
	}
	return (0);
}