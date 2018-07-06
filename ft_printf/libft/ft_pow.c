/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pow.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmacdona <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/18 10:25:11 by mmacdona          #+#    #+#             */
/*   Updated: 2018/06/18 10:25:13 by mmacdona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_pow(int num, size_t exp)
{
	size_t	i;
	int		result;

	i = 0;
	result = 1;
	while (i < exp)
	{
		result *= num;
		i++;
	}
	return (result);
}
