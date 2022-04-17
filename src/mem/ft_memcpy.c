#include <stddef.h>

void	ft_memcpy(void *dest, const void *src, size_t n)	{
	char	*dest_ptr;
	const char	*src_ptr;

	dest_ptr = dest;
	src_ptr = src;
	while (n)	{
		*dest_ptr = *src_ptr;
		dest_ptr++;
		src_ptr++;
		n--;
	}
}
