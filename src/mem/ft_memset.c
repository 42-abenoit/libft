#include "libft.h"

void	ft_memset(void *s, int c, t_size n)	{
	while (n)	{
		*((char*)s) = c;
		s++;
		n--;
	}
}
