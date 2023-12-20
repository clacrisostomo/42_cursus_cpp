# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: csantos- <csantos-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/08 20:18:43 by csantos-          #+#    #+#              #
#    Updated: 2023/10/24 16:40:19 by csantos-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = account

CC = c++
FLAGS = -Wall -Werror -Wextra -std=c++98 -fsanitize=leak
SRC = 	tests.cpp \
		Account.cpp

INC = Account.hpp

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