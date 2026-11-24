#include "libmy.h"

void	my_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (!lst || !new)
		return ;
	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	else
	{
		last = my_lstlast(*lst);
		last->next = new;
	}
}
