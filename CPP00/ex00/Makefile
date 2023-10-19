NAME = megaphone

CC = c++

FLAGS = -Wall -Wextra -Werror -std=c++98 -fsanitize=leak

SRC = megaphone.cpp

OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME):$(SRC)
	$(CC) $(SRC) $(FLAGS) -o $@

%.o: %.cpp
	$(CC) -c -o $@ $(FLAGS)

git:
	@git add .
	@git commit -m "$m"
	@git push

clean:
		rm -f $(OBJ)

fclean: clean
		rm -f $(NAME) $(OBJ)

re: fclean all
