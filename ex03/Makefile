# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: maiman-m <maiman-m@student.42kl.edu.my>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/28 10:43:11 by maiman-m          #+#    #+#              #
#    Updated: 2024/02/28 18:22:04 by maiman-m         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = violence

CXX = c++

CXXFLAGS = -Wall -Wextra -Werror -std=c++98 -g3 -pedantic

CPPFLAGS = -I/Weapon.hpp -I/HumanA.hpp -I/HumanB.hpp

SRCS = main.cpp Weapon.cpp HumanA.cpp HumanB.cpp
	   
OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) $(CPPFLAGS) -o $(NAME)

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
