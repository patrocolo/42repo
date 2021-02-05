#include "libft.h"

int		ft_count_d(int n)
{
	int	i;

	i = 0;
	if (n < 0)
		n = 0 - n;
	while (n > 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

int		ft_pow10(int n)
{
	int		i;
	int		res;

	i = 0;
	res = 1;
	while (i < n)
	{
		res *= 10;
		i++;
	}
	return (res);
}

char	*ft_malloc_itoa(int n)
{
	int		d;
	int		f;
	char    *s;

	f = 0;
	if (n < 0)
		f = 1;
	d = ft_count_d(n);
	if (!(s = (char*)malloc(1 + f + d)))
		return (NULL);
	return (s);
}

char	*ft_itoa(int n)
{
    char	*s;
    int		sign;
    int		i;
    int		c;
    int		d;

    if (n == -2147483648)
        return ("-2147483648");
    s = ft_malloc_itoa(n);
    i = 0;
    sign = 0;
    if (n < 0)
    {
        s[i++] = '-';
        n = 0 - n;
        sign = 1;
    }
    c = 1;
    d = ft_count_d(n);
    while (i < d + sign)
    {
        s[i++] = n / ft_pow10(d - c) + 48;
        n = n % ft_pow10(d - c++);
    }
    s[i] = 0;
    return (s);
}
