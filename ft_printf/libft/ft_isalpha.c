/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmacdona <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/14 13:49:23 by mmacdona          #+#    #+#             */
/*   Updated: 2018/06/14 13:49:25 by mmacdona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_isalpha(int c)
{
	int		is_up;
	int		is_low;

	is_up = ft_isupper(c);
	is_low = ft_islower(c);
	if (is_up != 0 || is_low != 0)
		return (1);
	return (0);
}
