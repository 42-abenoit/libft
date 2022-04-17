#include <stddef.h>

void	*ft_memchr(const void *s, int c, size_t n)	{
	const char	*ptr;

	ptr = s;
	while (n)	{
		if (*ptr == c)
			return ((void*)ptr);
		ptr++;
		n--;
	}
	return (NULL);
}
