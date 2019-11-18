/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenoit <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 14:27:52 by abenoit           #+#    #+#             */
/*   Updated: 2019/11/11 19:17:07 by abenoit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int x;

	if (n < 0)
	{
		x = -n;
		write(fd, "-", 1);
	}
	else
		x = n;
	if (x > 10)
	{
		ft_putnbr_fd(x / 10, fd);
		ft_putnbr_fd(x % 10, fd);
	}
	if (x < 10)
	{
		x += 48;
		write(fd, &x, 1);
	}
}
