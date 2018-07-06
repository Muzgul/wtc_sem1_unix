/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmacdona <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/18 11:07:47 by mmacdona          #+#    #+#             */
/*   Updated: 2018/06/18 11:07:49 by mmacdona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(const void *content, size_t content_size)
{
	t_list	*node;
	void	*t_cont;
	size_t	t_size;

	node = (t_list *)malloc(sizeof(t_list));
	if (node == (void*)0)
		return (NULL);
	if (content == (void *)0)
	{
		t_cont = (void *)0;
		t_size = 0;
	}
	else
	{
		t_cont = ft_memalloc(content_size);
		t_cont = ft_memcpy(t_cont, content, content_size);
		t_size = content_size;
	}
	node->content = t_cont;
	node->content_size = t_size;
	node->next = NULL;
	return (node);
}
