int	ft_tolower(int c)	{
	if (c >= 'A' && c <= 'Z')
		return (c ^ 0b00100000);
	return (c);
}
