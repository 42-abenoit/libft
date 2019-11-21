/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenoit <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 15:18:53 by abenoit           #+#    #+#             */
/*   Updated: 2019/11/19 14:41:00 by abenoit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	int ret;
	int i;
	int sign;

	i = 0;
	ret = 0;
	sign = 1;
	while ((str[i] > 8 && str[i] < 14) || str[i] == 32)
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] > 47 && str[i] < 58)
	{
		if (str[i] > 47 && str[i] < 58)
			ret = (ret * 10) + (str[i] - 48);
		i++;
	}
	return (ret * sign);
}
