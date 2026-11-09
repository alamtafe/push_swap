NAME =  push_swap
CC = cc 
CFLAGS = -Wall -Wextra -Werror
SRC = main.c parsing/parsing.c utils/add_back.c utils/ft_atoi.c utils/new_list.c
OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC)  $(CFLAGS) $(OBJ) -o $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) -I . -c $< -o $@

clean:
	rm $(OBJ) 

fclean: clean
	rm $(NAME)

re: fclean all

.PHONY: clean fclean re