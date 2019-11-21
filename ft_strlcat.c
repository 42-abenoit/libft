/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenoit <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 13:00:01 by abenoit           #+#    #+#             */
/*   Updated: 2019/11/19 14:39:06 by abenoit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	ret;

	i = 0;
	while (dst[i] && i < dstsize)
		i++;
	j = 0;
	while (src[j])
		j++;
	if (dstsize > i)
		ret = i + j;
	else
		ret = dstsize + j;
	j = 0;
	while (src[j] && dstsize != 0 && (i < dstsize - 1))
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	if (dstsize > i)
		dst[i] = '\0';
	return (ret);
}
