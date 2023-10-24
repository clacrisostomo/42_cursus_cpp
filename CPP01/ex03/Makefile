NAME = violence

CC = c++
FLAGS = -Wall -Wextra -Werror -std=c++98 -fsanitize=leak
SRC = 	main.cpp \
		HumanA.cpp \
		HumanB.cpp \
		Weapon.cpp

INC = 	Weapon.hpp \
		HumanA.hpp \
		HumanB.hpp


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