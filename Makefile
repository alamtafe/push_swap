NAME = push_swap
CC = cc
CFLAGS = -Wall -Wextra -Werror
SRC = main.c parsing/parsing.c \
	utils/ft_atol.c utils/new_list.c utils/add_back.c utils/ft_bzero.c utils/ft_calloc.c\
	utils/ft_strdup.c utils/ft_strlen.c utils/ft_substr.c \
	utils/free_list.c utils/free_split.c \
	operations/reverse_rotate.c operations/swap.c \
	operations/push.c operations/rotate.c utils/ft_split.c
OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ) 
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) -I . -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re