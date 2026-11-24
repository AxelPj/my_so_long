#include "libmy.h"

char	*my_strjoin(char *s1, char *s2)
{
	char	*s;
	size_t	i;
	size_t	j;
	size_t	k;

	k = 0;
	j = 0;
	i = 0;
	s = (char *)malloc((my_strlen(s1) + my_strlen(s2) + 1) * sizeof(char));
	if (!s)
		return (NULL);
	while (s1 && s1[i])
		s[k++] = s1[i++];
	while (s2 && s2[j])
		s[k++] = s2[j++];
	s[k] = '\0';
	return (free(s1), s);
}
