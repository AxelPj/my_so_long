#ifndef LIBMY_H
# define LIBMY_H

# include <unistd.h>
# include <stddef.h>
# include <stdio.h>
# include <stdlib.h>

//------------------------------Part1----------------------//

int			my_isalpha(int c);
int			my_isdigit(int c);
int			my_isalnum(int c);
int			my_isascii(int c);
int			my_isprint(int c);
size_t		my_strlen(const char *str);
void		*my_memset(void *s, int c, size_t n);
void		my_bzero(void *s, size_t n);
void		*my_memcpy(void *dest, const void *src, size_t n);
void		*my_memmove(void *dest, const void *src, size_t n);
size_t		my_strlcpy(char *dst, const char *src, size_t size);
size_t		my_strlcat(char *dst, const char *src, size_t size);
int			my_toupper(int c);
int			my_tolower(int c);
int			my_strchr(char *s, int c);
char		*my_strrchr(const char *s, int c);
int			my_strncmp(const char *s1, const char *s2, size_t n);
void		*my_memchr(const void *s, int c, size_t n);
int			my_memcmp(const void *s1, const void *s2, size_t n);
char		*my_strnstr(const char *haystack, const char *needle, size_t len);
int			my_atoi(const char *str);
void		*my_calloc(int nmemb, int size);
char		*my_strdup(char *s);

//------------------------------Part2----------------------//

char		*my_substr(char const *s, unsigned int start, size_t len);
char		*my_strjoin(char *s1, char *s2);
char		*my_strtrim(char *s1, char *set);
char		**my_split(char const *s, char c);
char		*my_itoa(int n);
char		*my_strmapi(char const *s, char (*f)(unsigned int, char));
void		my_striteri(char *s, void (*f)(unsigned int, char *));
void		my_putchar_fd(char c, int fd);
void		my_putstr_fd(char *s, int fd);
void		my_putendl_fd(char *s, int fd);
void		my_putnbr_fd(int n, int fd);

//------------------------------BONUS----------------------//

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;
t_list		*my_lstnew(void *content);
void		my_lstadd_front(t_list **lst, t_list *new);
int			my_lstsize(t_list *lst);
t_list		*my_lstlast(t_list *lst);
void		my_lstadd_back(t_list **lst, t_list *new);
void		my_lstdelone(t_list *lst, void (*del)(void*));
void		my_lstclear(t_list **lst, void (*del)(void*));
void		my_lstiter(t_list *lst, void (*f)(void *));
t_list		*my_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));
int			my_strcmp(const char *s1, const char *s2);

#endif