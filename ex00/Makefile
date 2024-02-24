# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: maiman-m <maiman-m@student.42kl.edu.my>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/24 20:24:11 by maiman-m          #+#    #+#              #
#    Updated: 2024/02/24 20:25:25 by maiman-m         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = brainz

CXX = c++

CXXFLAGS = -Wall -Wextra -Werror -std=c++98 -g3 -pedantic

CPPFLAGS = -I/Zombie.hpp

SRCS = main.cpp Zombie.cpp newZombie.cpp randomChump.cpp
	   
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
