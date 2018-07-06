/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmacdona <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/13 16:02:10 by mmacdona          #+#    #+#             */
/*   Updated: 2018/06/13 16:02:13 by mmacdona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*line_1;
	unsigned char	*line_2;
	size_t			i;

	line_1 = (unsigned char *)s1;
	line_2 = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (line_1[i] != line_2[i])
			return (line_1[i] - line_2[i]);
		i++;
	}
	return (0);
}
