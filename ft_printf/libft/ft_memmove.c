/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmacdona <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/13 15:52:44 by mmacdona          #+#    #+#             */
/*   Updated: 2018/06/13 15:52:45 by mmacdona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*line_d;
	unsigned char	*line_s;
	int				i;

	line_d = (unsigned char *)dst;
	line_s = (unsigned char *)src;
	i = 0;
	if (src < dst)
		i = len - 1;
	while (i < (int)len && i >= 0)
	{
		if (&line_d[i] != &line_s[i])
			line_d[i] = line_s[i];
		if (src < dst)
			i--;
		else
			i++;
	}
	return (dst);
}
