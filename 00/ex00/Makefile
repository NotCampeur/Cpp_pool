NAME = megaphone

CC = clang++

CFLAGS = -Wall -Wextra -Werror -std=c++98

SRCS_DIR = $(shell find srcs -type d)

vpath %.cpp $(foreach dir, $(SRCS_DIR), $(dir):)

SRCS = megaphone.cpp

OBJ_DIR = objs/

OBJS = $(addprefix $(OBJ_DIR)/, $(SRCS:%.cpp=%.o))

all: $(NAME)

$(OBJ_DIR)/%.o : %.cpp
		@mkdir -p $(OBJ_DIR)
		@echo "Creating of object $< ... \c"
		@$(CC) $(CFLAGS) -o $@ -c $<
		@echo "DONE"

$(NAME): $(OBJS) Makefile
		@echo "Creating of executable $(NAME) ... \c"
		@$(CC) $(CFLAGS) $(OBJS) -o $(NAME)
		@echo "DONE"

re: fclean all

clean:
	@echo Deleting objects
	@rm -rf objs

fclean: clean
	@echo Deleting executable
	@rm -rf megaphone

.PHONY: all re clean fclean
