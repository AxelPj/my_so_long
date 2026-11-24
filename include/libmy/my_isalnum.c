#include "libmy.h"

int	my_isalnum(int c)
{
	return (my_isdigit(c) || my_isalpha(c));
}
