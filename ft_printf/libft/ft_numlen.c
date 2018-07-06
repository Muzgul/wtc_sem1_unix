/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_numlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmacdona <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/18 09:53:15 by mmacdona          #+#    #+#             */
/*   Updated: 2018/06/18 09:53:16 by mmacdona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_numlen(int n)
{
	size_t		len;
	size_t		is_neg;
	long int	temp;

	if (n == 0 || n == -0)
		return (1);
	temp = n;
	is_neg = 0;
	if (temp < 0)
	{
		is_neg = 1;
		temp *= -1;
	}
	len = 0;
	while (temp > 0)
	{
		temp /= 10;
		len++;
	}
	return (len + is_neg);
}
