# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: maiman-m <maiman-m@student.42kl.edu.my>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/25 15:59:19 by maiman-m          #+#    #+#              #
#    Updated: 2024/02/25 15:59:20 by maiman-m         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = hi_brain

CXX = c++

CXXFLAGS = -Wall -Wextra -Werror -std=c++98 -g3 -pedantic

SRCS = main.cpp
	   
OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
