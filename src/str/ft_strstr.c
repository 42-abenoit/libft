char	*ft_strstr(const char *haystack, const char *needle)	{
	const char	*hptr;
	const char	*nptr;

	while (*haystack)	{
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
	}
	return (NULL);
}
