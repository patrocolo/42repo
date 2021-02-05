#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	unsigned char	ch;
	size_t			i;

	str = (unsigned char*)s;
	ch = (unsigned char)c;
	i = 0;
	while (i < n)
		if (str[i++] == ch)
			return ((void *)s + i - 1);
	return (NULL);
}
