char	*ft_strcasestr(const char *haystack, const char *needle)	{
	const char	*hptr;
	const char	*nptr;

	while (*haystack)	{
		if (*haystack == *needle)	{
			hptr = haystack;
			nptr = needle;
			while (*nptr && (*nptr | 0b00100000) == (*hptr | 0b00100000))	{
				nptr++;
				hptr++;
			}
			if (*nptr == '\0')
				return ((char*)haystack);
		}
		haystack++;
	}
	return (NULL);
}
