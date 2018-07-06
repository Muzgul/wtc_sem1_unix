/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmacdona <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/13 15:30:56 by mmacdona          #+#    #+#             */
/*   Updated: 2018/06/13 15:30:58 by mmacdona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*line_d;
	unsigned char	*line_s;
	size_t			i;

	line_d = (unsigned char *)dst;
	line_s = (unsigned char *)src;
	i = 0;
	while (i < n)
	{
		line_d[i] = line_s[i];
		i++;
	}
	return (dst);
}
