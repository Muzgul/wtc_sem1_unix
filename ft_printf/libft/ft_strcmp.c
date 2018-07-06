/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmacdona <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/14 12:11:13 by mmacdona          #+#    #+#             */
/*   Updated: 2018/06/14 12:11:15 by mmacdona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strcmp(const char *s1, const char *s2)
{
	unsigned char	*line_1;
	unsigned char	*line_2;
	size_t			i;

	line_1 = (unsigned char *)s1;
	line_2 = (unsigned char *)s2;
	i = 0;
	while (line_1[i] != '\0' && line_2[i] != '\0' && line_1[i] == line_2[i])
		i++;
	if (line_1[i] != line_2[i])
		return (line_1[i] - line_2[i]);
	return (0);
}
