#include <stddef.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t n)	{
	const char	*hptr;
	const char	*nptr;

	while (*haystack && n)	{
		if (*haystack == *needle)	{
			hptr = haystack;
			nptr = needle;
			while (*nptr && *nptr == *hptr)	{
				nptr++;
				hptr++;
			}
			if (*nptr == '\0')
				return ((char*)haystack);
		}
		haystack++;
		n--;
	}
	return (NULL);
}
