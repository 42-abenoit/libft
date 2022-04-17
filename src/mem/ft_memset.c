#include <stddef.h>

void	ft_memset(void *s, int c, size_t n)	{
	while (n)	{
		*((char*)s) = c;
		s++;
		n--;
	}
}
