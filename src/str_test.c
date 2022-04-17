#include <string.h>
#include "str.h"

static int	ft_test_str()	{
/*
	char	dest_1[] = "abcdefg                        ";
	char	src_1[] = "123456";
	char	*ptr_1;

	ft_putstr("ft_strcat(): ");
	ptr_1 = ft_strcat(dest_1, src_1);
	ft_putstr(ptr_1);
	ft_putchar('\n');

	char	dest_2[] = "abcdefg                        ";
	char	src_2[] = "123456";
	char	*ptr_2;

	ft_putstr("ft_strncat(): ");
	ptr_2 = ft_strncat(dest_2, src_2, 7);
	ft_putstr(ptr_1);
	ft_putchar('\n');

	char	str_1[] = "abcdefghij\0klmnop";

	ft_putstr("ft_strchr: ");
	ft_putstr(ft_strchr(str_1, 'f'));
	ft_putchar('\n');
	ft_putstr(ft_strchr(str_1, '\0'));
	ft_putchar('\n');
	ft_putstr(ft_strchr(str_1, 'x'));
	ft_putchar('\n');

	char	str_2[] = "abcdefghijklfmnop";

	ft_putstr("ft_strrchr: ");
	ft_putstr(strrchr(str_2, 'f'));
	ft_putchar('\n');
	ft_putstr(ft_strrchr(str_2, '\0'));
	ft_putchar('\n');
	ft_putstr(ft_strrchr(str_2, 'x'));
	ft_putchar('\n');
*/

	char	str_3[] = "abcdefg";
	char	str_4[] = "0123456";

	ft_putstr("ft_strcmp: ");
	ft_putchar(ft_strcmp(str_3, str_4));
	ft_putchar('\n');

	char	str_5[] = "abcdefg";
	char	str_6[] = "abcdef6";

	ft_putstr("ft_strncmp: ");
	ft_putchar(ft_strncmp(str_5, str_6, 5));
	ft_putchar('\n');

	char	str_7[] = "abcdefg";
	char	str_8[] = "ABCDEFG";

	ft_putstr("ft_strcmp_nocase: ");
	ft_putchar(ft_strcmp_nocase(str_7, str_8));
	ft_putchar('\n');

	ft_putstr("ft_strcpy: ");
	ft_putstr(ft_strcpy(str_7, str_8));
	ft_putchar('\n');

	ft_putstr("ft_strncpy: ");
	ft_putstr(ft_strncpy(str_5, str_6, 4));
	ft_putchar('\n');
	return (0);
}

static int	test_str()	{
/*
	char	dest_1[] = "abcdefg                        ";
	char	src_1[] = "123456";
	char	*ptr_1;

	ft_putstr("strcat(): ");
	ptr_1 = strcat(dest_1, src_1);
	ft_putstr(ptr_1);
	ft_putchar('\n');

	char	dest_2[] = "abcdefg                        ";
	char	src_2[] = "123456";
	char	*ptr_2;

	ft_putstr("strncat(): ");
	ptr_2 = strncat(dest_2, src_2, 7);
	ft_putstr(ptr_1);
	ft_putchar('\n');

	char	str_1[] = "abcdefghij\0klmnop";

	ft_putstr("strchr: ");
	ft_putstr(strchr(str_1, 'f'));
	ft_putchar('\n');
	ft_putstr(strchr(str_1, '\0'));
	ft_putchar('\n');
	ft_putstr(strchr(str_1, 'x'));
	ft_putchar('\n');

	char	str_2[] = "abcdefghijklfmnop";

	ft_putstr("strrchr: ");
	ft_putstr(strrchr(str_2, 'f'));
	ft_putchar('\n');
	ft_putstr(strrchr(str_2, '\0'));
	ft_putchar('\n');
	ft_putstr(strrchr(str_2, 'x'));
	ft_putchar('\n');
*/

	char	str_3[] = "abcdefg";
	char	str_4[] = "0123456";

	ft_putstr("strcmp: ");
	ft_putchar(strcmp(str_3, str_4));
	ft_putchar('\n');

	char	str_5[] = "abcdefg";
	char	str_6[] = "abcdef6";

	ft_putstr("strncmp: ");
	ft_putchar(strncmp(str_5, str_6, 5));
	ft_putchar('\n');

	char	str_7[] = "abcdefg";
	char	str_8[] = "ABCDEFG";

	ft_putstr("strcoll: ");
	ft_putchar(strcoll(str_7, str_8));
	ft_putchar('\n');

	ft_putstr("strcpy: ");
	ft_putstr(strcpy(str_7, str_8));
	ft_putchar('\n');

	ft_putstr("strncpy: ");
	ft_putstr(strncpy(str_5, str_6, 4));
	ft_putchar('\n');
	return (0);
}

int	str_test()	{
	ft_test_str();
	test_str();
	return (0);
}
