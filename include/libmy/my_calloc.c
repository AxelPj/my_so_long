#include "libmy.h"

void	*my_calloc(int nmemb, int size)
{
	void			*tab;
	size_t			total_size;
	unsigned char	*ptr;
	size_t			i;

	i = 0;
	total_size = (size_t)nmemb * size;
	if (nmemb == 0 || size == 0)
		return (malloc(0));
	tab = malloc(total_size);
	if (!tab)
		return (NULL);
	ptr = (unsigned char *)tab;
	while (i < total_size)
	{
		ptr[i] = 0;
		i++;
	}
	return (tab);
}
