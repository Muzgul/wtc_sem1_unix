/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmacdona <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/14 12:17:27 by mmacdona          #+#    #+#             */
/*   Updated: 2018/06/14 12:17:29 by mmacdona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	*l1;
	unsigned char	*l2;
	size_t			i;

	l1 = (unsigned char *)s1;
	l2 = (unsigned char *)s2;
	i = 0;
	while (l1[i] != '\0' && l2[i] != '\0' && i < n && l1[i] == l2[i])
		i++;
	if (l1[i] != l2[i] && i < n)
		return (l1[i] - l2[i]);
	return (0);
}
