NAME := ft_ls

SRC_DIR := src
OBJ_DIR := obj
LIBFT_DIR := libft

# Collect source files
SRCS := $(wildcard $(SRC_DIR)/*.c)
OBJS := $(patsubst $(SRC_DIR)/%.c, $(OBJ_DIR)/%.o, $(SRCS))

# Define Libft path
LIBFT := $(LIBFT_DIR)/libft.a

CC := gcc
# Removed -fPIC as it is not needed for executables
CFLAGS := -Wall -Wextra -Werror -I$(SRC_DIR) -I$(LIBFT_DIR)/includes

# Removed -shared. 
# Added -L to point to libft directory so the linker finds -lft
LDFLAGS := -L$(LIBFT_DIR)
LDLIBS := -lft

RM := rm -f

all: $(NAME)

# Link the program
$(NAME): $(LIBFT) $(OBJS)
	@echo "Linking program $(NAME)..."
	$(CC) $(OBJS) $(LDFLAGS) $(LDLIBS) -o $(NAME)
	@echo "Build complete!"

# Compile libft
$(LIBFT):
	@echo "Building libft..."
	@make -C $(LIBFT_DIR)

# Compile object files
$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
	@mkdir -p $(OBJ_DIR)
	@echo "Compiling $<..."
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	@echo "Cleaning object files..."
	@$(RM) -r $(OBJ_DIR)
	@echo "Cleaning libft..."
	@make -C $(LIBFT_DIR) clean

fclean: clean
	@echo "Cleaning program executable..."
	@$(RM) $(NAME)
	@echo "Full cleaning libft..."
	@make -C $(LIBFT_DIR) fclean

re: fclean all

.PHONY: all clean fclean re
