/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmorales <hmorales@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 12:09:04 by hmorales          #+#    #+#             */
/*   Updated: 2021/11/19 12:17:12 by hmorales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*aux;

	aux = lst;
	ft_lstiter(aux, (void *)f);
	if (!aux)
	{
		ft_lstdelone(lst, del);
		return (NULL);
	}
	return (aux);
}
