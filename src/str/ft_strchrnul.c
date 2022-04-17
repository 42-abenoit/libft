#include <stddef.h>

char	*ft_strchrnul(const char *s, int c)	{
	while (s)	{
		if (*s == c)
			return ((char*)s);
		s++;
	}
	return ((char*)s);
}
