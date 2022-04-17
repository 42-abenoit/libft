char	*ft_strcpy(char *dest, const char *src)	{
	char	*ptr;

	ptr = dest;
	while (*src)	{
		*ptr = *src;
		ptr++;
		src++;
	}
	return (dest);
}
