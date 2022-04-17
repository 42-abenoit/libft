#include <stddef.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)	{
	const char	*ptr_1;
	const char	*ptr_2;

	ptr_1 = s1;
	ptr_2 = s2;
	while (n)	{
		if (*ptr_1 != *ptr_2)
			return (*ptr_1 - *ptr_2);
		ptr_1++;
		ptr_2++;
		n--;
	}
	return (0);
}
