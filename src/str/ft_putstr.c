#include <unistd.h>

static int	ft_strlen(const char *str)	{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	ft_putstr(const char *str)	{
	write(1, str, ft_strlen(str));
}
