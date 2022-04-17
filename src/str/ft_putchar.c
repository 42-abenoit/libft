#include <unistd.h>

void	ft_putchar(const int c)	{
	write(1, &c, 1);
}
