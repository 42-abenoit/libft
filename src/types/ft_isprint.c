int	ft_isprint(int c)	{
	if (c >= ' ' && c <= 127)
		return (1);
	return (0);
}
