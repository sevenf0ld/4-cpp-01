# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: maiman-m <maiman-m@student.42kl.edu.my>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/03 16:09:03 by maiman-m          #+#    #+#              #
#    Updated: 2024/03/03 16:27:24 by maiman-m         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = harl

CXX = c++

CXXFLAGS = -Wall -Wextra -Werror -std=c++98 -g3 -pedantic

#CPPFLAGS = -I/Harl.hpp
#CPPFLAGS = -I./
CPPFLAGS = -I/

SRCS = main.cpp Harl.cpp
	   
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
