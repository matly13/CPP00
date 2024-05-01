# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: martina <martina@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/26 17:52:27 by martina           #+#    #+#              #
#    Updated: 2024/04/26 17:55:17 by martina          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = PhoneBook
FLAGS = -Wall -Wextra -Werror -std=c++98
INC = Contact.hpp
CXX = c++
SRC = PhoneBook.cpp\
		Contact.cpp\

OBJ = $(SRC:.cpp=.o)

all : $(NAME)

$(NAME) : $(OBJ)
	$(CXX) $(FLAGS) $^ -o $@

%.o : %.cpp $(INC)
	$(CXX) $(FLAGS) -c $< -o $@

clean :
	rm -rf $(OBJ)

fclean : clean
	rm -rf $(NAME)

re : fclean
	make all

.PHONY: all clean fclean re

