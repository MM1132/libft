CC=gcc
CFLAGS= -Wall -Wextra -Werror
NAME=libft.a
SRC_DIR=functions
OBJ_DIR=obj
SRC_FILES=\
	$(SRC_DIR)/ft_isalpha.c

# We create the list of .o files based on the list of .c files
OBJ_FILES=$(SRC_FILES:$(SRC_DIR)/%.c=$(OBJ_DIR)/%.o)

# The compiled program depends on all the .o files
$(NAME): $(OBJ_FILES)
	ar rcs $(NAME) $(OBJ_FILES)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
	mkdir $(OBJ_DIR)
	$(CC) $(CFLAGS) -c $< -o $@

all: $(NAME)

clean:
	rm -rf $(OBJ_DIR)

fclean: clean
	rm $(NAME)

re: fclean all
