#include "libft.h"


size_t		ft_strclen_split(char const *s, char c, size_t pos)
{
	size_t	len;

	len = 0;
	while (s[pos] && s[pos] == c)
	{
		pos++;
	}
	while (s[pos])
	{
		if (s[pos] == c)
			return (len);
		pos++;
		len++;
	}
	return (len);
}

size_t		ft_skipfirstc(char const *s, char c, size_t pos)
{
	int i;

	i = 0;
	while (s[pos + i] && s[pos + i] == c)
	{
		i++;
	}
	if (s[pos + i] == 0)
		return (-1);
	return (pos + i);
}

char		*ft_populatestring(char *arrstr, char const *s, size_t pos, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len)
	{
		arrstr[i] = s[pos + i];
		i++;
	}
	arrstr[i] = 0;
	return (arrstr);
}

char		**ft_split(char const *s, char c)
{
	char	**arr;
	int	    i;
	size_t	j;
	size_t	len;

	if (!(arr = (char **)malloc(sizeof(char *) * (ft_words(s, c) + 1))))
		return (NULL);
	i = 0;
	j = 0;
	while (s[i] && i != -1)
	{
		i = ft_skipfirstc(s, c, i);
		if (i != -1)
		{
			len = ft_strclen_split(s, c, i);
			if (!(arr[j] = (char *)malloc(1 + ft_strclen_split(s, c, i))))
				return (NULL);
			arr[j] = ft_populatestring(arr[j], s, i, len);
			j++;
			i += len;
		}
	}
	arr[j] = NULL;
	return (arr);
}
