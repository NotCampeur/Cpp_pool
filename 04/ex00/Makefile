NAME    = tester

CC      = clang++
CFLAGS  = -Wall -Wextra -Werror -std=c++98

INC_DIR = $(shell find includes -type d)
IFLAGS  = $(foreach dir, $(INC_DIR), -I$(dir))

vpath %.cpp srcs

SRC_DIR = $(shell find srcs -type d)
SRCS    = main.cpp Sorcerer.cpp Victim.cpp Peon.cpp Knight.cpp

OBJ_DIR = obj
OBJ     = $(addprefix $(OBJ_DIR)/, $(SRCS:%.cpp=%.o))

all: 			$(NAME)

show:
				@echo "SRCS :\n$(SRCS)"
				@echo "OBJ :\n$(OBJ)"
				@echo "CFLAGS :\n$(CFLAGS)"
				@echo "IFLAGS :\n$(IFLAGS)"
				@echo "INC_DIR :\n$(INC_DIR)"

$(OBJ_DIR)/%.o : %.cpp
				@mkdir -p $(OBJ_DIR)
				@$(CC) $(CFLAGS) $(IFLAGS) -o $@ -c $<

$(NAME):		$(OBJ) $(INC_DIR) 
				@$(CC) $(CFLAGS) $(OBJ) -o $(NAME)
				@rm -rf $(OBJ_DIR)

test:			all
				@./$(NAME)
				
re:				fclean all

clean:
				@rm -rf $(OBJ_DIR)

fclean:			clean
				@rm -f $(NAME)

.PHONY: all clean fclean re show
