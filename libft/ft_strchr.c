#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t		i;
	char		*p;

	i = 0;
	p = (char *)s;
	while (p[i])
		if (p[i++] == c)
			return (&(p[--i]));
	if (p[i] == c)
		return (&(p[i]));
	return (NULL);
}
