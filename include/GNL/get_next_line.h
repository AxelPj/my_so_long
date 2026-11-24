#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# include "../libmy/libmy.h"
# include <unistd.h>
# include <stddef.h>
# include <stdio.h>
# include <stdlib.h>
# include <fcntl.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 2
# endif

char	*readline(int fd, char *stach);
char	*recoveraftern(char *stach);
char	*recoverbeforen(char *line);
char	*get_next_line(int fd);

#endif