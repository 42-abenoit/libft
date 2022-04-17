#include <stddef.h>

char	*ft_strncat(char *dest, const char *src, size_t n)	{
	char	*ptr;

	ptr = dest;
	while (*ptr)
		ptr++;
	while (*src && n)	{
		*ptr = *src;
		ptr++;
		src++;
		n--;
	}
	if (!(*src))
		*ptr = '\0';
	return (dest);
}
