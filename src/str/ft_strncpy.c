#include <stddef.h>

char	*ft_strncpy(char *dest, const char *src, size_t n)	{
	char	*ptr;

	ptr = dest;
	while (*src && n)	{
		*ptr = *src;
		ptr++;
		src++;
		n--;
	}
	while (n)	{
		*ptr = '\0';
		n--;
	}
	return (dest);
}
