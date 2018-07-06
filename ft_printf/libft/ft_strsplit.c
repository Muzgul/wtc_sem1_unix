/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmacdona <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/16 10:54:19 by mmacdona          #+#    #+#             */
/*   Updated: 2018/06/16 10:54:20 by mmacdona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_strsplit(const char *s, char c)
{
	char	**str_a;
	size_t	i;
	size_t	j;
	size_t	words;

	i = 0;
	j = 0;
	words = ft_words(s, c);
	if (!(str_a = (char **)malloc(sizeof(char *) * (words + 1))))
		return (NULL);
	while (s[i] != '\0' && j < words)
	{
		if (s[i] != c)
		{
			str_a[j] = ft_strnew(ft_wordsize(&s[i], c));
			str_a[j] = ft_strncpy(str_a[j], &s[i], ft_wordsize(&s[i], c));
			while (s[i] != '\0' && s[i] != c)
				i++;
			j++;
		}
		else
			i++;
	}
	str_a[j] = NULL;
	return (str_a);
}
