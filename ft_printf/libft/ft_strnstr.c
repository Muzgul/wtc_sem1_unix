/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmacdona <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/14 12:05:16 by mmacdona          #+#    #+#             */
/*   Updated: 2018/06/14 12:05:19 by mmacdona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	n_len;

	n_len = ft_strlen(needle);
	if (n_len == 0)
		return ((char *)haystack);
	i = 0;
	j = 0;
	while (haystack[i] != '\0' && (i + j) < len)
	{
		j = 0;
		while (haystack[i + j] == needle[j] && (i + j) < len && j < n_len)
			j++;
		if (j == n_len)
			return ((char *)&haystack[i]);
		i++;
	}
	return (NULL);
}
