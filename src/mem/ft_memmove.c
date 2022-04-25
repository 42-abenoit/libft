#include <stddef.h>

void	*ft_memmove(void *dest, const void *src, size_t n)	{
	char	*dest_ptr;
	const char	*src_ptr;

	if (dest < src)	{
		dest_ptr = dest;
		src_ptr = src;
		while (n)	{
			*dest_ptr = *src_ptr;
			dest_ptr++;
			src_ptr++;
			n--;
		}
	}
	else	{
		dest_ptr = dest + n;
		src_ptr = src + n;
		while (n)	{
			*dest_ptr = *src_ptr;
			dest_ptr--;
			src_ptr--;
			n--;
		}
	}
	return (dest);
}
