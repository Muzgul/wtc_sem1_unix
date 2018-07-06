/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmacdona <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/15 12:03:26 by mmacdona          #+#    #+#             */
/*   Updated: 2018/06/15 12:03:27 by mmacdona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(const char *s, char (*f)(char))
{
	size_t	i;
	size_t	s_len;
	char	*str;

	s_len = ft_strlen(s);
	str = ft_strnew(s_len);
	if (str == NULL)
		return (NULL);
	i = 0;
	while (i < s_len)
	{
		str[i] = (*f)(s[i]);
		i++;
	}
	return (str);
}
