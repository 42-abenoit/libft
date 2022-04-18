/*Case insensitive compare of s1 and s2*/
/*Libc's strcoll is also case insensitive*/
/*but takes locale into account*/

int	ft_strcasecmp(const char *s1, const char *s2)	{
	while (*s1 || *s2)	{
		if ((*s1 | 0b00100000) != (*s2 | 0b00100000))
			return (*s1 - *s2);
		s1++;
		s2++;
	}
	return (0);
}
