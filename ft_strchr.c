/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenoit <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 20:28:40 by abenoit           #+#    #+#             */
/*   Updated: 2019/11/16 16:35:31 by abenoit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	tmp;
	int		i;

	tmp = c;
	i = 0;
	while (s[i])
	{
		if (s[i] == tmp)
			return (&((char*)s)[i]);
		i++;
	}
	if (tmp == '\0')
		return (&((char*)s)[i]);
	else
		return (NULL);
}
