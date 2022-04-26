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

# ifndef FT_PROTOTYPES
#  define FT_PROTOTYPES
#  include "mem.h"
#  include "str.h"
#  include "types.h"
#  include "ft_stdlib.h"
# endif

#endif
