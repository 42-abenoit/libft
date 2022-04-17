int	ft_ispunct(int c)	{
	if ((c > ' ' && c < '0')
		|| (c >'9' && c < 'A')
		|| (c > 'Z' && c < 'a')
		|| (c > 'z' && c <= 127))
		return (1);
	return (0);
}
