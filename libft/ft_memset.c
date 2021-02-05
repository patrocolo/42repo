#include "libft.h"

void	*ft_memset(void *b, int c, unsigned int len)
{
	size_t	i;

	i = 0;
	while (i < len)
	{
		*(unsigned char*)(b + i) = c;
		i++;
	}
	return (b);
}
