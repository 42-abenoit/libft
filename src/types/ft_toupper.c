int	ft_toupper(int c)	{
	if (c >= 'a' && c <= 'z')
		return (c ^ 0b00100000);
	return (c);
}
