#include <stddef.h>

char	*ft_strrchr(const char *s, int c)	{
	const char *ptr;

	ptr = s;
	while (*ptr)	{
		ptr++;
	}
	while (ptr >= s)	{
		if (*ptr == c)
			return ((char*)ptr);
		ptr--;
	}
	return (NULL);
}
