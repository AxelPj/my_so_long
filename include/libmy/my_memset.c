#include "libmy.h"

void	*my_memset(void *s, int c, size_t n)
{
	unsigned char	*s2;
	size_t			i;
	unsigned char	val;

	val = (unsigned char)c;
	i = 0;
	s2 = (unsigned char *)s;
	while (i < n)
	{
		s2[i] = val;
		i++;
	}
	return (s);
}
