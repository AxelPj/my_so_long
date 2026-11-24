#include "libmy.h"

static void	*my_memmove_right(void *dest, const void *src, size_t n)
{
	size_t				i;
	const unsigned char	*src2;
	unsigned char		*dest2;

	src2 = (const unsigned char *) src;
	dest2 = (unsigned char *) dest;
	i = 0;
	while (i < n)
	{
		dest2[i] = src2[i];
		i++;
	}
	return (dest);
}

static void	*my_memmove_left(void *dest, const void *src, size_t n)
{
	const unsigned char	*src2;
	unsigned char		*dest2;

	src2 = (const unsigned char *) src;
	dest2 = (unsigned char *) dest;
	while (n > 0)
	{
		n--;
		dest2[n] = src2[n];
	}
	return (dest);
}

void	*my_memmove(void *dest, const void *src, size_t n)
{
	if (n == 0)
		return (dest);
	if (!dest && !src)
		return (NULL);
	if (dest < src)
		my_memmove_right (dest, src, n);
	else
		my_memmove_left (dest, src, n);
	return (dest);
}
