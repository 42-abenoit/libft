#include "str.h"
#include "types.h"
#include <ctype.h>

static int	ft_test_char(int c)	{
	if (ft_isalnum(c))
		ft_putstr("ft_isalnum(c)): true\n");
	if (ft_isalpha(c))
		ft_putstr("ft_isalpha(c)): true\n");
	if (ft_iscntrl(c))
		ft_putstr("ft_iscntrl(c)): true\n");
	if (ft_isdigit(c))
		ft_putstr("ft_isdigit(c)): true\n");
	if (ft_isgraph(c))
		ft_putstr("ft_isgraph(c)): true\n");
	if (ft_islower(c))
		ft_putstr("ft_islower(c)): true\n");
	if (ft_isprint(c))
		ft_putstr("ft_isprint(c)): true\n");
	if (ft_ispunct(c))
		ft_putstr("ft_ispunct(c)): true\n");
	if (ft_isspace(c))
		ft_putstr("ft_isspace(c)): true\n");
	if (ft_isupper(c))
		ft_putstr("ft_isupper(c)): true\n");
	if (ft_isxdigit(c))
		ft_putstr("ft_isxdigit(c)): true\n");
	if (ft_isascii(c))
		ft_putstr("ft_isascii(c)): true\n");
	if (ft_isblank(c))
		ft_putstr("ft_isblank(c)): true\n");
	ft_putstr("ft_tolower(c): ");
	ft_putchar(ft_tolower(c));
	ft_putchar(ft_tolower('\n'));
	ft_putstr("ft_toupper(c): ");
	ft_putchar(ft_toupper(c));
	ft_putchar(ft_tolower('\n'));
	return (0);
}

static int	test_char(int c)	{
	if (isalnum(c))
		ft_putstr("isalnum(c)): true\n");
	if (isalpha(c))
		ft_putstr("isalpha(c)): true\n");
	if (iscntrl(c))
		ft_putstr("iscntrl(c)): true\n");
	if (isdigit(c))
		ft_putstr("isdigit(c)): true\n");
	if (isgraph(c))
		ft_putstr("isgraph(c)): true\n");
	if (islower(c))
		ft_putstr("islower(c)): true\n");
	if (isprint(c))
		ft_putstr("isprint(c)): true\n");
	if (ispunct(c))
		ft_putstr("ispunct(c)): true\n");
	if (isspace(c))
		ft_putstr("isspace(c)): true\n");
	if (isupper(c))
		ft_putstr("isupper(c)): true\n");
	if (isxdigit(c))
		ft_putstr("isxdigit(c)): true\n");
	if (isascii(c))
		ft_putstr("isascii(c)): true\n");
	if (isblank(c))
		ft_putstr("isblank(c)): true\n");
	ft_putstr("tolower(c): ");
	ft_putchar(tolower(c));
	ft_putchar(tolower('\n'));
	ft_putstr("toupper(c): ");
	ft_putchar(toupper(c));
	ft_putchar(tolower('\n'));
	return (0);
}

int	types_test()	{
	int	c = 'a';

	ft_putstr("Char is: ");
	ft_putchar(c);
	ft_putchar('\n');
	ft_test_char(c);
	test_char(c);

	ft_putchar('\n');

	c = 'A';
	ft_putstr("Char is: ");
	ft_putchar(c);
	ft_putchar('\n');
	ft_test_char(c);
	test_char(c);
	return (0);
}
