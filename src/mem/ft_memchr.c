#include <stddef.h>

void	*ft_memchr(void *s, int c, size_t n)	{
	char	*ptr;

	ptr = s;
	while (n)	{
		if (*ptr == c)
			return (ptr);
		ptr++;
		n--;
	}
	return (NULL);
}
