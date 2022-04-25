#ifndef LIBFT_H
# define LIBFT_H

enum	{
	FALSE,
	TRUE
};

enum	{
	SUCCESS,
	ERROR
};

int	types_test();
int	mem_test();
int	str_test();

# ifndef PROTOTYPES
#  define PROTOTYPES
#  include <stddef.h>

/***************/
/*     MEM     */
/***************/
void	ft_memset(void *s, int c, size_t n);
void	ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memmove(void *dest, const void *src, size_t n);
void	*ft_memchr(const void *s, int c, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
void	ft_bzero(void *s, size_t n);

/***************/
/*     STR     */
/***************/
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

/***************/
/*    TYPES    */
/***************/
int	ft_isalnum(int c);
int	ft_isalpha(int c);
int	ft_iscntrl(int c);
int	ft_isdigit(int c);
int	ft_isgraph(int c);
int	ft_islower(int c);
int	ft_isprint(int c);
int	ft_ispunct(int c);
int	ft_isspace(int c);
int	ft_isupper(int c);
int	ft_isxdigit(int c);

int	ft_isascii(int c);
int	ft_isblank(int c);

int	ft_tolower(int c);
int	ft_toupper(int c);
# endif

#endif
