/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenoit <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 13:31:51 by abenoit           #+#    #+#             */
/*   Updated: 2019/11/25 10:50:30 by abenoit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t i;
	size_t j;

	if (*needle == 0)
		return ((char*)(haystack));
	if (len == 0)
		return (NULL);
	i = 0;
	while (haystack[i] && i < len && len > 0)
	{
		j = 0;
		while (needle[j] && (needle[j] == haystack[i + j] && i + j < len))
			j++;
		if (needle[j] == 0)
			return (&((char*)haystack)[i]);
		i++;
	}
	return (NULL);
}
