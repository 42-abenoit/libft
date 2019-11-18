/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenoit <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 16:40:57 by abenoit           #+#    #+#             */
/*   Updated: 2019/11/12 18:01:06 by abenoit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	size_t			count;
	char			*cpy;

	if (s == NULL)
		return (NULL);
	if (start > ft_strlen(s))
	{
		if (!(cpy = malloc(sizeof(char))))
			return (NULL);
		cpy[0] = 0;
		return (cpy);
	}
	if (!(cpy = malloc((len + 1) * sizeof(char))))
		return (NULL);
	i = start;
	count = 0;
	while (s[i] && count < len)
	{
		cpy[count] = s[i];
		count++;
		i++;
	}
	cpy[count] = '\0';
	return (cpy);
}
