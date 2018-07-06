/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_spcafter.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmacdona <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/15 13:13:19 by mmacdona          #+#    #+#             */
/*   Updated: 2018/06/15 13:13:20 by mmacdona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_spcafter(const char *s)
{
	int		i;
	size_t	s_len;

	s_len = ft_strlen(s);
	i = s_len - 1;
	while (i >= 0 && ft_isspace(s[i]))
		i--;
	return (s_len - i - 1);
}
