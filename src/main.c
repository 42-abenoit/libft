#include "mem.h"
#include "str.h"
#include "types.h"

int	main()	{
	if (ft_isascii(129))	{
		ft_putstr("isascii\n");
	}
	if (ft_isalpha('a'))	{
		ft_putstr("isalpha\n");
	}
	if (ft_isdigit('a'))	{
		ft_putstr("isdigit\n");
	}
	char plop[] = "Salut";

	ft_memcpy(plop, "yo", 2);
	ft_putstr(plop);
}
