NAME = megaphone

FLAGS = -Wall -Wextra -Werror -std=c++98

SRC = megaphone.cpp

all: $(NAME)
$(NAME): $(OBJ)
	gcc $(FLAGS)

%.o: %.cpp
	gcc -c -o $@ $(CFLAGS)

git:
	@git add .
	@git commit -m "$m"
	@git push

clean:
		rm -f $(OBJ)
		rm -rf ./builds

fclean: clean
		rm -f $(NAME) $(OBJ)

re: fclean all
