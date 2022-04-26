#include <stddef.h>
#include <stdlib.h>

static size_t	ft_strlen(const char *str)	{
	size_t	i;

	i = 0;
	while (*str)	{
		str++;
		i++;
	}
	return (i);
}

char	*ft_strdup(const char *str)	{
	char	*ret;
	size_t	size;

	size = ft_strlen(str);
	ret = malloc((size + 1) * sizeof(char));
	if (ret == NULL)
		return (NULL);
	ret[size] = '\0';
	while (--size)	{
		ret[size] = str[size];
	}
	ret[size] = str[size];
	return (ret);
}
