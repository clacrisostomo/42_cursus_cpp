NAME = harl

CC = c++
FLAGS = -Wall -Wextra -Werror -std=c++98 

SRC = 	main.cpp \
		Harl.cpp

INC = 	Harl.hpp


OBJ = $(SRC:.cpp=.o)

all: $(NAME) $(INC)

$(NAME): $(OBJ) $(INC)
	$(CC) $(OBJ) -o $(NAME)

.cpp.o:
	$(CC) $(FLAGS) -c $< -o $@

git:
	@git add .
	@git commit -m "$m"
	@git push

clean:
		rm -f $(OBJ)

fclean: clean
		rm -f $(NAME) $(OBJ)

re: fclean all