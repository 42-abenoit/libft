#include <stddef.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t n)	{
	size_t	ret;

	ret = n;
	while (*src && n - 1 > 0)	{
		*dst = *src;
		dst++;
		src++;
		n--;
	}
	*dst = '\0';
	return (ret);
}
