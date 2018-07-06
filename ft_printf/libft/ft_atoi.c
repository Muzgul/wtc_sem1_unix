/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmacdona <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/14 12:23:44 by mmacdona          #+#    #+#             */
/*   Updated: 2018/06/14 12:23:45 by mmacdona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	size_t	i;
	size_t	neg;
	int		result;

	i = 0;
	result = 0;
	neg = 0;
	while (str[i] != '\0' && ft_isspace(str[i]))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			neg = 1;
		i++;
	}
	while (str[i] != '\0' && ft_isdigit(str[i]) != 0)
	{
		result *= 10;
		result += str[i] - '0';
		i++;
	}
	if (neg)
		result *= -1;
	return (result);
}
