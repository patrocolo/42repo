#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char		*str;
	const unsigned char	*str2;
	size_t				i;

	str = (unsigned char*)dst;
	str2 = (unsigned char*)src;
	i = 0;
	while (i < n)
	{
		str[i] = str2[i];
		if (str[i] == (unsigned char)c)
			return ((void*)(str + i + 1));
		++i;
	}
	return (NULL);
}
