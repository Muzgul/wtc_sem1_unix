/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmacdona <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/18 10:21:27 by mmacdona          #+#    #+#             */
/*   Updated: 2018/06/18 10:21:29 by mmacdona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr(int n)
{
	long int	temp;

	temp = n;
	if (temp < 0)
	{
		temp *= -1;
		ft_putchar('-');
	}
	if (temp >= 10)
	{
		ft_putnbr(temp / 10);
		ft_putnbr(temp % 10);
	}
	else
		ft_putchar(temp + '0');
}
