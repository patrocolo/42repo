#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*p;
	if(!(p = (void *)malloc(count * size)))
		return (NULL);
	ft_bzero(p, count);
	return (p);
}
