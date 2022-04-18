#ifndef	STR_H
# define STR_H

#include <stddef.h>

int		ft_isset(int c, const char *str);

void	ft_putchar(const int c);
void	ft_putstr(const char *str);

char	*ft_strcat(char *dest, const char *src);
char	*ft_strchr(const char *s, int c);
char	*ft_strchrnul(const char *s, int c);
int		ft_strcmp(const char *s1, const char *s2);
int		ft_strcasecmp(const char *s1, const char *s2);
char	*ft_strcpy(char *dest, const char *src);
size_t	ft_strcspn(const char *str, const char *reject);
char	*ft_strdup(const char *str);
char	*ft_strerror(int err_code, const char **init);
size_t	ft_strlen(const char *s);
char	*ft_strncat(char *dest, const char *src, size_t n);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
int		ft_strncasecmp(const char *s1, const char *s2, size_t n);
char	*ft_strncpy(char *dest, const char *src, size_t n);
char	*ft_strndup(const char *str, size_t n);
const char	*ft_strpbrk(const char *s, const char *accept);
char	*ft_strrchr(const char *s, int c);
size_t	ft_strspn(const char *str, const char *accept);
char	*ft_strstr(const char *haystack, const char *needle);
char	*ft_strcasestr(const char *haystack, const char *needle);

#endif
