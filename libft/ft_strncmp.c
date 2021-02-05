#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	p1;
	unsigned char	p2;

	i = 0;
	while (s1[i] && s2[i] && i < n)
	{
		p1 = (unsigned char)s1[i];
		p2 = (unsigned char)s2[i];
		if (p1 != p2)
			return (p1 - p2);
		i++;
	}
	if (i == n)
		return (0);
	p1 = (unsigned char)s1[i];
	p2 = (unsigned char)s2[i];
	return (p1 - p2);
}
