#include <string.h>
#include "mem.h"
#include "str.h"

static int	ft_test_mem()	{
	char	str_1[] = "abcdefghijk";
	char	str_2[] = "abcdefghijk";
	char	str_3[] = "abcdefghijk";
	char	str_4[] = "abcdefghijk";
	char	str_5[] = "abcdefghijk";
	char	str_6[] = "0123456789";

	ft_putstr("ft_memcpy:\n");
	ft_putstr("before: ");
	ft_putstr(str_1);
	ft_putchar('\n');
	ft_memcpy(str_1, str_1 + 4, 8);
	ft_putstr("after: ");
	ft_putstr(str_1);
	ft_putchar('\n');

	ft_putstr("ft_memmove:\n");
	ft_putstr("before: ");
	ft_putstr(str_2);
	ft_putchar('\n');
	ft_memmove(str_2, str_2 + 4, 8);
	ft_putstr("after: ");
	ft_putstr(str_2);
	ft_putchar('\n');

	ft_putstr("ft_memset:\n");
	ft_putstr("before: ");
	ft_putstr(str_3);
	ft_putchar('\n');
	ft_memset(str_3, 'A', 8);
	ft_putstr("after: ");
	ft_putstr(str_3);
	ft_putchar('\n');

	ft_putstr("ft_memchr:\n");
	ft_putstr("before: ");
	ft_putstr(str_4);
	ft_putchar('\n');
	ft_putstr("ft_memchr(str, c, 8): ");
	ft_putstr(ft_memchr(str_4, 'c', 8));
	ft_putchar('\n');

	ft_putstr("ft_memcmp:\n");
	ft_putstr("str_5: ");
	ft_putstr(str_5);
	ft_putchar('\n');
	ft_putstr("str_6: ");
	ft_putstr(str_6);
	ft_putchar('\n');
	ft_putstr("ft_memcmp(str_5, str_6, 8): ");
	ft_putchar(ft_memcmp(str_5, str_6, 8) + '0');
	ft_putchar('\n');

	ft_putstr("ft_bzero:\n");
	ft_putstr("before: ");
	ft_putstr(str_3);
	ft_putchar('\n');
	ft_bzero(str_3, 8);
	ft_putstr("after: ");
	ft_putstr(str_3);
	ft_putchar('\n');
	return (0);
}

static int	test_mem()	{
	char	str_1[] = "abcdefghijk";
	char	str_2[] = "abcdefghijk";
	char	str_3[] = "abcdefghijk";
	char	str_4[] = "abcdefghijk";
	char	str_5[] = "abcdefghijk";
	char	str_6[] = "0123456789";

	ft_putstr("memcpy:\n");
	ft_putstr("before: ");
	ft_putstr(str_1);
	ft_putchar('\n');
	memcpy(str_1, str_1 + 4, 8);
	ft_putstr("after: ");
	ft_putstr(str_1);
	ft_putchar('\n');

	ft_putstr("memmove:\n");
	ft_putstr("before: ");
	ft_putstr(str_2);
	ft_putchar('\n');
	memmove(str_2, str_2 + 4, 8);
	ft_putstr("after: ");
	ft_putstr(str_2);
	ft_putchar('\n');

	ft_putstr("memset:\n");
	ft_putstr("before: ");
	ft_putstr(str_3);
	ft_putchar('\n');
	memset(str_3, 'A', 8);
	ft_putstr("after: ");
	ft_putstr(str_3);
	ft_putchar('\n');

	ft_putstr("memchr:\n");
	ft_putstr("before: ");
	ft_putstr(str_4);
	ft_putchar('\n');
	ft_putstr("memchr(str, c, 8): ");
	ft_putstr(memchr(str_4, 'c', 8));
	ft_putchar('\n');

	ft_putstr("memcmp:\n");
	ft_putstr("str_5: ");
	ft_putstr(str_5);
	ft_putchar('\n');
	ft_putstr("str_6: ");
	ft_putstr(str_6);
	ft_putchar('\n');
	ft_putstr("memcmp(str_5, str_6, 8): ");
	ft_putchar(memcmp(str_5, str_6, 8) + '0');
	ft_putchar('\n');

	ft_putstr("bzero:\n");
	ft_putstr("before: ");
	ft_putstr(str_3);
	ft_putchar('\n');
	bzero(str_3, 8);
	ft_putstr("after: ");
	ft_putstr(str_3);
	ft_putchar('\n');
	return (0);
}

int	mem_test()	{
	ft_test_mem();
	test_mem();
	return (0);
}
