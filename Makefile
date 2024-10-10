CC=gcc
CFLAGS= -Wall -Wextra -Werror
NAME=libft.a
SRC_DIR=functions
OBJ_DIR=obj
SRC_FILES=
	$(SRC_DIR)/ft_isalnum.c \
	$(SRC_DIR)/ft_isalpha.c \
	$(SRC_DIR)/ft_isascii.c \
	$(SRC_DIR)/ft_isdigit.c \
	$(SRC_DIR)/ft_isprint.c \
	$(SRC_DIR)/ft_memset.c \
	$(SRC_DIR)/ft_strlen.c

# We create the list of .o files based on the list of .c files
OBJ_FILES=$(SRC_FILES:$(SRC_DIR)/%.c=$(OBJ_DIR)/%.o)

# The compiled program depends on all the .o files
$(NAME): $(OBJ_FILES)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJ_FILES)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
	mkdir $(OBJ_DIR)
	$(CC) -c $< -o $@

all: $(NAME)

clean:
	rm $(OBJ_DIR)/*.o

fclean: clean
	rm $(NAME)

re: fclean all
