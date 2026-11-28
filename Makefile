NAME = push_swap
NAME_BONUS = checker
CC = cc
CFLAGS = -Wall -Wextra -Werror
INCLUDES = includes
SRC = main.c utils/utils_lst/add_back.c utils/utils_lst/ft_atoi.c utils/utils_lst/new_list.c utils/utils_lst/lst_size.c \
		operations/reverse_rotate.c operations/swap.c operations/push.c operations/rotate.c \
		sorting/simple.c sorting/medium.c sorting/complex.c  sorting/adaptive.c\
		parsing/parsing.c parsing/flag.c\
		utils/utils_sorting/find_min.c utils/utils_sorting/find_pos.c utils/utils_sorting/mov_min_to_top.c \
		utils/utils_sorting/is_sorted.c utils/utils_sorting/find_sqrt.c utils/utils_sorting/set_index.c \
		utils/utils_sorting/mov_max_to_top_index.c utils/utils_sorting/push_chunk.c  utils/utils_sorting/find_pos_index.c \
		utils/utils_sorting/cal_max_bits.c utils/utils_sorting/compute_disorder.c \
		utils/utils_parsing/ft_atol.c  utils/utils_parsing/ft_bzero.c utils/utils_parsing/ft_calloc.c\
		utils/utils_parsing/ft_strdup.c utils/utils_parsing/ft_strlen.c utils/utils_parsing/ft_substr.c \
		utils/utils_parsing/free_list.c utils/utils_parsing/free_split.c  utils/utils_parsing/ft_split.c  utils/utils_parsing/ft_strcmp.c\
		bench/benchmark.c utils/utils_bench/ft_putnbr.c utils/utils_bench/ft_putstr.c



OBJ = $(SRC:.c=.o)
SRC_BONUS = bonus/checker.c bonus/bonus_parsing.c bonus/main.c \
				operations/reverse_rotate.c operations/swap.c operations/push.c operations/rotate.c \
				get_next_line/get_next_line.c get_next_line/get_next_line_utils.c utils/utils_lst/lst_size.c \
				utils/utils_parsing/ft_atol.c  utils/utils_parsing/ft_bzero.c utils/utils_parsing/ft_calloc.c\
				utils/utils_parsing/ft_strdup.c utils/utils_parsing/ft_strlen.c utils/utils_parsing/ft_substr.c utils/utils_parsing/ft_strcmp.c \
				utils/utils_parsing/free_list.c utils/utils_parsing/free_split.c  utils/utils_parsing/ft_split.c utils/utils_sorting/is_sorted.c \
				utils/utils_lst/add_back.c utils/utils_lst/ft_atoi.c utils/utils_lst/new_list.c \

OBJ_BONUS = $(SRC_BONUS:.c=.o) 

all: $(NAME) bonus

$(NAME): $(OBJ) 
	$(CC)  $(CFLAGS) $(OBJ) -o $(NAME)

bonus: $(NAME_BONUS)

$(NAME_BONUS): $(OBJ_BONUS) 
	$(CC)  $(CFLAGS) $(OBJ_BONUS) -o $(NAME_BONUS)

%.o: %.c includes/push_swap.h 
	$(CC) $(CFLAGS) -I $(INCLUDES) -c $< -o $@

clean:
	rm -f $(OBJ)
	rm -f $(OBJ_BONUS)

fclean: clean
	rm -f $(NAME)
	rm -f $(NAME_BONUS)

re: fclean all

.PHONY: all clean fclean re bonus