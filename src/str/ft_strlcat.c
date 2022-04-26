#include <stddef.h>

static size_t	ft_strlen(const char *s)	{
	size_t	i;

	i = 0;
	while (*s)	{
		s++;
		i++;
	}
	return (i);
}

size_t	ft_strlcat(char *dst, const char *src, size_t n)	{
	size_t	ret;
	char	*ptr;

	ret = n;
	ptr = dst;
	while (*ptr)	{
		ptr++;
		n--;
	}
	if (!n)
		return (ret);
	ret = ft_strlen(dst + ft_strlen(src));
	while (*src && n - 1 > 0)	{
		*ptr = *src;
		ptr++;
		src++;
		n--;
	}
	*ptr = '\0';
	return (ret);
}
