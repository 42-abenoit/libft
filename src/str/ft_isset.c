#include <stddef.h>

int	ft_isset(int c, const char *str)	{
	int	i;

	i = 0;
	while (*str)	{
		if (c == *str)
			return (i);
		str++;
		i++;
	}
	return (-1);
}
