#include <limits.h>

static int	ft_isspace(int c)	{
	if ((c >= '\t' && c <= '\r')
		|| c == ' ')
		return (1);
	return (0);
}

int	ft_atoi(const char	*str)	{
	int	n;
	char	sign;

	n = 0;
	sign = 1;
	while (*str && ft_isspace(*str))	{
		str++;
	}
	if (*str && *str == '-')	{
		sign *= -1;
		str++;
	}
	while (*str)	{
		n *= 10;
		n = (*str - '0');
		str++;
	}
	return (n);
}
