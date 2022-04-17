char	*ft_strcat(char *dest, const char *src)	{
	char	*ptr;

	ptr = dest;
	while (*ptr)
		ptr++;
	while (*src)	{
		*ptr = *src;
		ptr++;
		src++;
	}
	*ptr = '\0';
	return (dest);
}
