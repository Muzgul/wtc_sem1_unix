/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmacdona <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/13 15:41:49 by mmacdona          #+#    #+#             */
/*   Updated: 2018/06/13 15:41:51 by mmacdona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
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
		if (line_d[i] == (unsigned char)c)
			return (&line_d[i + 1]);
		i++;
	}
	return (NULL);
}
