#include "libft.h"

int		ft_isspace(int c)
{
	if (c == ' ' || c == '\t'
			|| c == '\n' || c == '\v'
			|| c == '\r' || c == '\f')
		return (1);
	return (0);
}
