NAME = 

CC = c++
FLAGS = -Wall -Wextra -Werror -std=c++98
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
## $(FLAGS) $< -o $@

.cpp.o:
	$(CC) $(FLAGS) -c $< -o $@
##%.o: %.cpp
##	$(CC) $(INC) -c -o $@ $(FLAGS)

git:
	@git add .
	@git commit -m "$m"
	@git push

clean:
		rm -f $(OBJ)

fclean: clean
		rm -f $(NAME) $(OBJ)

re: fclean all