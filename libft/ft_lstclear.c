/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmorales <hmorales@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 11:52:51 by hmorales          #+#    #+#             */
/*   Updated: 2021/11/19 12:03:17 by hmorales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	unsigned int	i;

	i = 0;
	if (!lst)
		return ;
	while (lst[i])
	{
		del(lst[i]->content);
		free (lst[i]);
		i++;
	}
	free (lst);
	lst = NULL;
}
