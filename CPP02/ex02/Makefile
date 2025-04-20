NAME = canonical_form

CC = c++
CFLAGS = -std=c++98 -Wall -Wextra -Werror

SRC = main.cpp Fixed.cpp
OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	@echo "Creating Progam..."
	@$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

%.o: %.cpp
	@$(CC) $(CFLAGS) -c $< -o $@

clean:
	@echo "Removing object files.."
	@rm -f $(OBJ)

fclean: clean
	@echo "Removing Progam.."
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re