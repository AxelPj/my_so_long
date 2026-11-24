#include "libmy.h"	

char	*my_strdup(char *s)
{
	char	*dest;
	size_t	i;

	i = 0;
	dest = (char *) malloc((my_strlen(s) + 1) * sizeof(char));
	if (!dest)
		return (NULL);
	while (s[i])
	{
		dest[i] = s[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
