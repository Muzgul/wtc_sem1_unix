/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmacdona <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/18 17:17:08 by mmacdona          #+#    #+#             */
/*   Updated: 2018/06/18 17:17:09 by mmacdona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strndup(const char *s, size_t n)
{
	size_t	i;
	size_t	len;
	char	*str;

	i = 0;
	len = ft_strlen(s);
	str = ft_strnew(n);
	while (i < n)
	{
		if (i < len)
			str[i] = s[i];
		else
			str[i] = '\0';
		i++;
	}
	str[i] = '\0';
	return (str);
}
