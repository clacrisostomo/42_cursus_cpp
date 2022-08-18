NAME = phonebook

CC = c++
FLAGS = -Wall -Wextra -Werror -std=c++98
SRC = 	main.cpp \
		PhoneBook.cpp \
		Contact.cpp

INC = 	PhoneBook.hpp \
		Contact.hpp

OBJ = $(SRC:.cpp=.o)

all: $(NAME) $(INC)

$(NAME): $(OBJ) $(INC)
	$(CC) $(OBJ)
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
