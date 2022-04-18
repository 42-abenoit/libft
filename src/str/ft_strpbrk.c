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

const char	*ft_strpbrk(const char *s, const char *accept)	{
	while (*s)	{
		if (ft_isset(*s, accept) >= 0)
			return (s);
		s++;
	}
	return (NULL);
}
