#include "libft.h"

size_t		ft_strclen(char *s, char c)
{
	size_t	i;
	size_t	len;

	i = 0;
	while (s[i] == c)
		i++;
	len = 0;
	while (s[i] && s[i] != c)
	{
		len++;
		i++;
	}
	return (len);
}
