NAME =  push_swap
CC = cc 
CFLAGS = -Wall -Wextra -Werror
SRC = main.c utils/utils_lst/add_back.c utils/utils_lst/ft_atoi.c utils/utils_lst/new_list.c utils/utils_lst/lst_size.c \
		operations/reverse_rotate.c operations/swap.c operations/push.c operations/rotate.c \
		sorting/simple.c sorting/medium.c sorting/complex.c  sorting/adaptive.c\
		parsing/parsing.c \
		utils/utils_sorting/find_min.c utils/utils_sorting/find_pos.c utils/utils_sorting/mov_min_to_top.c \
		utils/utils_sorting/is_sorted.c utils/utils_sorting/find_sqrt.c utils/utils_sorting/set_index.c \
		utils/utils_sorting/mov_max_to_top_index.c utils/utils_sorting/push_chunk.c  utils/utils_sorting/find_pos_index.c \
		utils/utils_sorting/cal_max_bits.c utils/utils_sorting/compute_disorder.c

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) -g -O0    $(CFLAGS)   $(OBJ) -o $(NAME)

%.o: %.c push_swap.h
	$(CC) -g $(CFLAGS) -I . -c $< -o $@

clean:
	rm -rf $(OBJ) 

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: clean fclean re