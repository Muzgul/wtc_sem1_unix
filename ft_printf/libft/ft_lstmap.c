/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmacdona <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/18 12:07:03 by mmacdona          #+#    #+#             */
/*   Updated: 2018/06/18 12:07:03 by mmacdona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*node;
	t_list	*newlst;

	newlst = (*f)(lst);
	lst = lst->next;
	node = newlst;
	while (lst != NULL)
	{
		node->next = (*f)(lst);
		lst = lst->next;
		node = node->next;
	}
	return (newlst);
}
