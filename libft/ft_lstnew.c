#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*lstnew;

	if (!(lstnew = (t_list *)malloc(3)))
		return (0);
	lstnew->content = content;
	lstnew->next = NULL;
	return (lstnew);
}
