# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: stakimot <stakimot@student.42tokyo.jp>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/16 19:07:02 by stakimot          #+#    #+#              #
#    Updated: 2023/07/16 19:12:55 by stakimot         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CXX = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98
INC = -I inc/
SRCS = src/main.cpp src/Zombie.cpp src/ZombieHorde.cpp
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