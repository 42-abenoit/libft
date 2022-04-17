#ifndef	MEM_H
# define MEM_H

#include <stddef.h>

void	ft_memset(void *s, int c, size_t n);
void	ft_memcpy(void *dest, void *src, size_t n);
void	ft_memmove(void *dest, void *src, size_t n);
void	*ft_memchr(void *s, int c, size_t n);

#endif
