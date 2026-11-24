#include "libmy.h"

char	*my_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	size_t	len;
	char	*str;

	i = 0;
	len = my_strlen(s);
	str = (char *) malloc((len + 1) * sizeof (char));
	if (!str)
		return (NULL);
	while (s[i])
	{
		str[i] = ((*f)(i, s[i]));
		i++;
	}
	str[i] = '\0';
	return (str);
}
