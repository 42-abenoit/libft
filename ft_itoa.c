/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenoit <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 11:04:55 by abenoit           #+#    #+#             */
/*   Updated: 2019/11/11 14:46:27 by abenoit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_itoa_fill(long int n, char *nb, int index)
{
	long int	x;

	if (n < 0)
	{
		x = -n;
		nb[0] = '-';
	}
	else
		x = n;
	if (x >= 10)
	{
		ft_itoa_fill(x / 10, nb, index - 1);
		ft_itoa_fill(x % 10, nb, index);
	}
	if (x < 10)
	{
		x += 48;
		nb[index] = x;
	}
}

char	*ft_itoa(int n)
{
	char		*ret;
	long int	x;
	int			i;
	int			size;

	x = n;
	i = 0;
	while (x != 0)
	{
		x /= 10;
		i++;
	}
	size = i;
	if (n < 0)
	{
		size++;
		x *= -n;
	}
	if (n == 0)
		size = 1;
	if (!(ret = malloc((size + 1) * sizeof(char))))
		return (NULL);
	ret[size] = '\0';
	ft_itoa_fill(n, ret, size - 1);
	return (ret);
}
