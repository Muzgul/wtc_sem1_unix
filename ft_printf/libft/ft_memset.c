/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmacdona <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/13 14:58:50 by mmacdona          #+#    #+#             */
/*   Updated: 2018/06/13 14:58:53 by mmacdona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	unsigned char	*line_b;

	i = 0;
	line_b = (unsigned char *)b;
	while (i < len)
	{
		line_b[i] = (unsigned char)c;
		i++;
	}
	return (b);
}
