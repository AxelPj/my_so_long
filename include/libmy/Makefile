NAME = libmy.a
CC = gcc
SRC = my_isalpha.c \
	my_isdigit.c \
	my_isalnum.c \
	my_isascii.c \
	my_isprint.c \
	my_strlen.c \
	my_memset.c \
	my_bzero.c \
	my_memcpy.c \
	my_memmove.c \
	my_strlcpy.c \
	my_strlcat.c \
	my_toupper.c \
	my_tolower.c \
	my_strchr.c \
	my_strrchr.c \
	my_strncmp.c \
	my_memchr.c \
	my_memcmp.c \
	my_strnstr.c \
	my_atoi.c \
	my_calloc.c \
	my_strdup.c \
	my_substr.c \
	my_strjoin.c \
	my_strtrim.c \
	my_split.c \
	my_itoa.c \
	my_strmapi.c \
	my_striteri.c \
	my_putchar_fd.c \
	my_putstr_fd.c \
	my_putendl_fd.c \
	my_putnbr_fd.c \
	my_strcmp.c \

SRC_BONUS = my_lstadd_back_bonus.c \
			my_lstadd_front_bonus.c \
			my_lstclear_bonus.c \
			my_lstdelone_bonus.c \
			my_lstiter_bonus.c \
			my_lstlast_bonus.c \
			my_lstmap_bonus.c \
			my_lstnew_bonus.c \
			my_lstsize_bonus.c \

CFLAGS = -Wall -Wextra -Werror
OBJ = $(SRC:.c=.o)
OBJ_BONUS = $(SRC_BONUS:.c=.o)
all: $(NAME)
bonus: $(OBJ) $(OBJ_BONUS)
	@ar rcs $(NAME) $(OBJ) $(OBJ_BONUS)
	@ranlib $(NAME)

$(NAME): $(OBJ)
	@ar rcs $(NAME) $(OBJ)
	@ranlib $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	@rm -f $(OBJ) $(OBJ_BONUS)

fclean: clean
	@rm -f $(NAME)

re: fclean all