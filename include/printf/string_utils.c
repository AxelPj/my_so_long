#include "my_printf.h"

int	my_putchar(char c)
{
	return (write (1, &c, 1));
}

int	my_putstr(char *str)
{
	int	len;

	len = 0;
	if (!str)
		return (write(1, "(null)", 6));
	while (*str)
	{
		write (1, str, 1);
		str++;
		len++;
	}
	return (len);
}
