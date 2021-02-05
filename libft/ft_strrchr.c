#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t		i;
	char		*p;
	int			lastpos;

	i = 0;
	lastpos = -1;
	p = (char *)s;
	while (p[i] != '\0')
	{
		if (p[i] == c)
			lastpos = i;
		i++;
	}
	if (p[i] == c)
		return (&(p[i]));
	if (lastpos == -1)
		return (NULL);
	return (&(p[lastpos]));
}
