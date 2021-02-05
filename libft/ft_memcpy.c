#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char		*str;
	unsigned int		i;
	unsigned char		*srccpy;

	srccpy = (unsigned char *)src;
	str = (unsigned char *)dst;
	i = 0;
	if (src == NULL && dst == NULL)
		return (NULL);
	while (i < n)
	{
		str[i] = srccpy[i];
		i++;
	}
	return (str);
}
