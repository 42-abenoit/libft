void	ft_memcpy(void *dest, void *src, unsigned long int n)	{
	char	*dest_ptr;
	char	*src_ptr;

	dest_ptr = dest;
	src_ptr = src;
	while (n)	{
		*dest_ptr= *src_ptr;
		dest_ptr++;
		src_ptr++;
		n--;
	}
}
