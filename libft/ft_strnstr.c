#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t		i;
	size_t		j;
	char		*h;
	char		*n;

	h = (char *)haystack;
	if (!needle[0])
		return (h);
	n = (char *)needle;
	i = 0;
	while (h[i] && i < len)
	{
		j = 0;
		while (h[i + j] && h[i + j] == n[j] && i + j < len)
		{
			j++;
			if (!n[j])
				return (&(h[i]));
		}
		i++;
	}
	return (NULL);
}
