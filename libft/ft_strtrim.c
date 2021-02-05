#include "libft.h"

int     ft_ctrim(char const *s, char const *set)
{
    int i;
    int j;
    int res;
    int flag;

    i = 0;
    res = 0;
    while (s[i])
    {
        j = 0;
        flag = 0;
        while (set[j] && flag == 0)
        {
            if (set[j] == s[i])
                flag = 1;
            j++;
        }
        if (flag == 1)
            res++;
        i++;
    }
    return (res);
}

char	*ft_strtrim(char const *s1, char const *set)
{
    int		i;
    int		j;
    int		p;
    char	*s;
    int		lenset;

    lenset = ft_strlen(set);
	if (!set || !set[0])
		return ((char *)(s1));
    if(!(s =(char *)malloc(sizeof (char) * ft_strlen(s1) - ft_ctrim(s1, set) + 1)))
			return (NULL);
    i = 0;
    p = 0;
    while (s1[i])
    {
        j = 0;
        while (set[j] && s1[i] != set[j])
            j++;
        if (j == lenset)
        {
            s[p++] = s1[i];
        }
        i++;
    }
    return (s);
}



