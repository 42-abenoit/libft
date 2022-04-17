#include <stddef.h>

static int	ft_isset(int c, const char *str)	{
	while (*str)	{
		if (c == *str)
			return (1);
		str++;
	}
	return (0);
}

size_t	ft_strcspn(const char *str, const char *reject)	{
	size_t	i;

	i = 0;
	while (*str)	{
		if (ft_isset(*str, reject))
			return (i);
		str++;
		i++;
	}
	return (i);
}
