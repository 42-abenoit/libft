#include <stddef.h>

static int	ft_isset(int c, const char *str)	{
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

size_t	ft_strcspn(const char *str, const char *reject)	{
	size_t	i;

	i = 0;
	while (*str)	{
		if (ft_isset(*str, reject) >= 0)
			return (i);
		str++;
		i++;
	}
	return (i);
}
