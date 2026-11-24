#include "libmy.h"

char	*my_strtrim(char *s1, char *set)
{
	size_t	start;
	size_t	end;
	char	*result;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	while (s1[start] && my_strchr(set, s1[start]))
		start++;
	end = my_strlen(s1);
	while (end > start && my_strchr(set, s1[end - 1]))
		end--;
	result = (char *)malloc(end - start + 1);
	if (!result)
		return (NULL);
	my_strlcpy(result, s1 + start, end - start + 1);
	return (result);
}
