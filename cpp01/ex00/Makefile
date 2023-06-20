# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: stakimot <stakimot@student.42tokyo.jp>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/06/20 20:01:57 by stakimot          #+#    #+#              #
#    Updated: 2023/06/20 20:08:05 by stakimot         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CXX = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98
INC = -I inc/
SRCS = src/main.cpp src/Zombie.cpp src/newZombie.cpp
OBJS = $(SRCS:.cpp=.o)

NAME = zombie

all : $(NAME)

$(NAME) : $(OBJS)
	$(CXX) $(CFLAGS) $(INC) $(OBJS) -o $(NAME)

clean :
	rm -rf $(OBJS)

fclean : clean
	rm -rf $(NAME)

re : fclean all

.PHONY : all clean fclean re