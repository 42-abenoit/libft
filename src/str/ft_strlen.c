#include <stddef.h>

size_t	ft_strlen(const char *s)	{
	size_t	i;

	i = 0;
	while (*s)	{
		s++;
		i++;
	}
	return (i);
}
