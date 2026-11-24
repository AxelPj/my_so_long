#include "libmy.h"

t_list	*my_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*current;
	t_list	*newlst;

	if (!lst || !f || !del)
		return (NULL);
	newlst = NULL;
	while (lst)
	{
		current = my_lstnew(f(lst->content));
		if (current == NULL)
		{
			my_lstclear(&newlst, del);
			return (NULL);
		}
		my_lstadd_back(&newlst, current);
		lst = lst->next;
	}
	return (newlst);
}
