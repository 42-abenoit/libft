#ifndef	MEM_H
# define MEM_H

#include <stddef.h>

void	ft_memset(void *s, int c, size_t n);
void	ft_memcpy(void *dest, const void *src, size_t n);
void	ft_memmove(void *dest, const void *src, size_t n);
void	*ft_memchr(const void *s, int c, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
void	ft_bzero(void *s, size_t n);

/***************************/
/* Awaiting implementation */
/***************************/
void	ft_mempcpy(void *dest, const char *src, size_t n);
void	ft_memccpy(void *dest, const char *src, int c, size_t n);

#endif
