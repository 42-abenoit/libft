#include <stddef.h>

void	ft_bzero(void *s, size_t n)	{
	char	*ptr;

	ptr = s;
	while (n)	{
		*ptr = '\0';
		ptr++;
		n--;
	}
}
