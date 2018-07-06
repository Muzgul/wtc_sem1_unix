/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmacdona <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/15 13:02:15 by mmacdona          #+#    #+#             */
/*   Updated: 2018/06/15 13:02:17 by mmacdona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(const char *s)
{
	size_t	i;
	size_t	j;
	size_t	s_len;
	char	*str;

	if (s == NULL)
		return (NULL);
	s_len = ft_strlen(s);
	i = ft_spcbefore(s);
	j = s_len - ft_spcafter(s);
	if (i == 0 && j == s_len)
		return (ft_strdup(s));
	if (i == s_len)
		return (ft_strnew(0));
	str = ft_strnew(j - i);
	if (str == NULL)
		return (NULL);
	str = ft_strncpy(str, &s[i], j - i);
	return (str);
}
