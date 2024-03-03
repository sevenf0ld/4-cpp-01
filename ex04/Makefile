# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: maiman-m <maiman-m@student.42kl.edu.my>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/03 16:08:30 by maiman-m          #+#    #+#              #
#    Updated: 2024/03/03 16:08:33 by maiman-m         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = sed

CXX = c++

CXXFLAGS = -Wall -Wextra -Werror -std=c++98 -g3 -pedantic

CPPFLAGS = -I./

SRCS = main.cpp ft_replace.cpp
	   
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
