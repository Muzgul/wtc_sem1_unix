/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmacdona <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/14 17:21:25 by mmacdona          #+#    #+#             */
/*   Updated: 2018/06/14 17:21:26 by mmacdona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void	*space;

	space = (void *)malloc(sizeof(void) * size);
	if (space == NULL)
		return (NULL);
	ft_bzero(space, size);
	return (space);
}
