/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_words.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmacdona <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/16 10:56:10 by mmacdona          #+#    #+#             */
/*   Updated: 2018/06/16 10:56:11 by mmacdona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_words(const char *s, char c)
{
	size_t	i;
	size_t	words;
	size_t	new_word;

	i = 0;
	words = 0;
	new_word = 1;
	while (s[i] != '\0')
	{
		if (s[i] != c && new_word)
		{
			new_word = 0;
			while (s[i] != c && s[i] != '\0')
				i++;
			words++;
		}
		if (s[i] == c)
			new_word = 1;
		i++;
	}
	return (words);
}
