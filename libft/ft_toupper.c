#include "libft.h"

int	ft_islower(int c)
{
	if (c >= 97 && c<= 122)
		return (1);
	return (0);
}

int	ft_toupper(int c)
{
	if (ft_islower(c))
		return (c - 32);
	return (c);
}
