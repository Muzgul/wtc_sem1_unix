/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmacdona <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/13 15:57:58 by mmacdona          #+#    #+#             */
/*   Updated: 2018/06/13 15:57:59 by mmacdona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*line_s;
	size_t			i;

	line_s = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (line_s[i] == (unsigned char)c)
			return ((void *)s + i);
		i++;
	}
	return (NULL);
}
