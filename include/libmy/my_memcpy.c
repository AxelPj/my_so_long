#include "libmy.h"

void	*my_memcpy(void *dest, const void *src, size_t n)
{
	size_t				i;
	const unsigned char	*src2;
	unsigned char		*dest2;

	src2 = (const unsigned char *) src;
	dest2 = (unsigned char *) dest;
	i = 0;
	if (!dest && !src)
		return (NULL);
	if (n == 0)
		return (dest);
	while (i < n)
	{
		dest2[i] = src2[i];
		i++;
	}
	return (dest);
}
