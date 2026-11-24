#include "my_printf.h"
#include <stdarg.h>

int	my_printf(const char *format, ...)
{
	va_list		arg;
	int			compteur;
	int			i;

	i = 0;
	va_start(arg, format);
	compteur = 0;
	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;
			compteur += my_parse_printf(format[i], arg);
		}
		else
			compteur += my_putchar(format[i]);
		i++;
	}
	va_end (arg);
	return (compteur);
}

/* int main ()
{
	#include <stdio.h>
#include "my_printf.h"

    printf("Testing printf with different formats:\n");
    printf("%%c: %c\n", 'A');
    printf("%%s: %s\n", "Hello, world!");
    printf("%%p: %p\n", (void *)0x12345678);
    printf("%%d: %d\n", 12345);
    printf("%%i: %i\n", -54321);
    printf("%%u: %u\n", 12345);
    printf("%%x: %x\n", 255);
    printf("%%X: %X\n", 255);
    printf("\nTesting my_printf with different formats:\n");
    my_printf("%%c: %c\n", 'A');
    my_printf("%%s: %s\n", "Hello, world!");
    my_printf("%%p: %p\n", (void *)0x12345678);
    my_printf("%%d: %d\n", 12345);
    my_printf("%%i: %i\n", -54321);
    my_printf("%%u: %u\n", 12345);
    my_printf("%%x: %x\n", 255);
    my_printf("%%X: %X\n", 255);
    return (0);
} */
