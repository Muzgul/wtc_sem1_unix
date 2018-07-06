/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmacdona <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/18 11:41:26 by mmacdona          #+#    #+#             */
/*   Updated: 2018/06/18 11:41:27 by mmacdona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*head;
	t_list	*node;

	head = *alst;
	while (head != NULL)
	{
		node = head;
		head = head->next;
		ft_lstdelone(&node, del);
	}
	*alst = (void *)0;
}
