/*Case insensitive compare of s1 and s2*/
/*Libc's strcoll is also case insensitive*/
/*but takes locale into account*/

static int	casecmp(int c1, int c2)	{
	if (((c1 >= 'A' && c1 <= 'Z')
		|| (c1 >= 'a' && c1 <= 'z'))
		&& ((c2 >= 'A' && c2 <= 'Z')
			|| (c2 >= 'a' && c2 <= 'z'))
		&& (*s1 | 0b00100000) == (*s2 | 0b00100000))
			return (1);
	return (0);
}

int	ft_strcasecmp(const char *s1, const char *s2)	{
	while (*s1 || *s2)	{
		if (*s1 =! *s2 && !casecmp(*s1, *s2))
			return (*s1 - *s2);
		s1++;
		s2++;
	}
	return (0);
}
