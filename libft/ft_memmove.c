#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t				i;
	unsigned char		*str;
	const unsigned char	*str2;

	str = (unsigned char*)dst;
	str2 = (unsigned char*)src;
	i = 0;
	if (dst == NULL && src == NULL)
		return (NULL);
	if (str2 < str)
		while (++i <= len)
			str[len - i] = str2[len - i];
	else
		while (len-- > 0)
			*(str++) = *(str2++);
	return (dst);
}
