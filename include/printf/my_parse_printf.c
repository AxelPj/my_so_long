#include "my_printf.h"

int	my_parse_printf(char c, va_list arg)
{
	int		compteur;

	compteur = 0;
	if (c == 'c')
		compteur += my_putchar(va_arg(arg, int));
	else if (c == 's')
		compteur += my_putstr(va_arg(arg, char *));
	else if (c == 'p')
		compteur += my_putptr(va_arg(arg, void *));
	else if (c == 'd' || c == 'i')
		compteur += my_putnbr(va_arg(arg, int));
	else if (c == 'u')
		compteur += my_unsigned_putnbr(va_arg(arg, unsigned int));
	else if (c == 'x')
		compteur += my_putnbr_base(va_arg(arg, unsigned int));
	else if (c == 'X')
		compteur += my_putnbr_basemaj(va_arg(arg, int));
	else if (c == '%')
		return (write (1, "%", 1));
	else
		return (my_putchar(c));
	return (compteur);
}
