/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmacdona <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/18 09:51:23 by mmacdona          #+#    #+#             */
/*   Updated: 2018/06/18 09:51:25 by mmacdona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	char		*str;
	size_t		numlen;
	size_t		i;
	long int	temp;

	temp = n;
	numlen = ft_numlen(temp);
	str = ft_strnew(numlen);
	if (str == NULL)
		return (NULL);
	if (temp < 0)
		temp *= -1;
	i = numlen;
	while (i > 0)
	{
		str[i - 1] = (temp % 10) + '0';
		temp /= 10;
		i--;
	}
	if (n < 0)
		str[i] = '-';
	return (str);
}
