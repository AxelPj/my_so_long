#ifndef MY_PRINTF_H
# define MY_PRINTF_H

# include <stddef.h>
# include <stdarg.h>
# include <stdio.h>
# include <unistd.h>

int		my_printf(const char *format, ...);
int		my_parse_printf(char c, va_list arg);
int		my_putchar(char c);
int		my_putstr(char *str);
int		my_putnbr(int n);
int		my_unsigned_putnbr(unsigned long n);
int		my_putnbr_base(unsigned long n);
int		my_putnbr_basemaj(unsigned int n);
int		my_putptr(void *ptr);

#endif