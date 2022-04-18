#include <stddef.h>

char	*ft_strerror(int err_code, const char **init)	{
	static size_t	size = 0;
	static char		**err_msg[] = NULL;

	if (init && !err_msg)	{
		err_msg = init;
		while (init)	{
			init++;
			size++;
		}
	}
	if (err_code < size)
		return (err_msg[err_code]);
	return (NULL);
}
