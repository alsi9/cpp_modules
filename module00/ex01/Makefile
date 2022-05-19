# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ephantom <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/11 12:33:07 by ephantom          #+#    #+#              #
#    Updated: 2022/05/11 12:33:10 by ephantom         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= 	phonebook

CC		=	clang++

FLAGS	=	-Wall -Werror -Wextra -std=c++98

SRC		=	Contact.cpp	main.cpp PhoneBook.cpp

HDR =		Contact.hpp PhoneBook.hpp

OBJS	=	$(SRC:.cpp=.o)

RM		=	rm -rf

.PHONY:		all clean fclean re

all:		$(NAME)

$(NAME):	$(OBJS)
				@$(CC) $(FLAGS) $(OBJS) -o $(NAME)
				@echo "Compiled "$(NAME)" successfully!"

%.o:%.cpp $(HDR)
				@$(CC) $(FLAGS) -c $< -o $@
				@echo "---Compiled "$<" successfully!---"

clean:
				$(RM) $(OBJS)

fclean:		clean
				$(RM) $(NAME)

re:			fclean all



