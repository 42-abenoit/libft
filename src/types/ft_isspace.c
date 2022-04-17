int	ft_isspace(int c)	{
	if ((c >= '\t' && c <= '\r')
		|| c == ' ')
		return (1);
	return (0);
}
