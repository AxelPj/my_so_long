#include "libmy.h"

size_t	my_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	src_len;
	size_t	dst_len;

	j = 0;
	dst_len = my_strlen(dst);
	src_len = my_strlen(src);
	i = dst_len;
	if (size <= dst_len)
		return (size + src_len);
	while (src[j] && i < size - 1)
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = '\0';
	return (src_len + dst_len);
}
