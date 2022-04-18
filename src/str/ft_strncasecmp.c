#include <stddef.h>

int	ft_strncasecmp(const char *s1, const char *s2, size_t n)	{
	while ((*s1 || *s2) && n)	{
		if ((*s1 | 0b00100000) != (*s2 | 0b00100000))
			return (*s1 - *s2);
		s1++;
		s2++;
		n--;
	}
	return (0);
}
