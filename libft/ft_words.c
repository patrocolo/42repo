#include "libft.h"

size_t		ft_words(const char *s, char c)
{
	size_t		i;
	size_t		words;

	i = 0;
	words = 0;
	while (s[i])
	{
		if (s[i] == c)
		{
			while (s[i + 1] && s[i + 1] == c)
				i++;
			words++;
		}
		i++;
	}
	return (words);
}
