# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: stakimot <stakimot@student.42tokyo.jp>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/16 19:07:02 by stakimot          #+#    #+#              #
#    Updated: 2024/03/05 23:10:38 by stakimot         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CXX = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98
INC = -I inc/
SECSDIR = src/
OBJDIR = obj/
SRCS = main.cpp Zombie.cpp ZombieHorde.cpp
OBJS_NAME = $(SRCS:.cpp=.o)
OBJS = $(addprefix $(OBJDIR), $(OBJS_NAME))

NAME = zombie

all : $(NAME)

$(NAME) : $(OBJS)
	$(CXX) $(CFLAGS) -o $@ $^

$(OBJDIR)%.o : $(SECSDIR)%.cpp
	@mkdir -p $(OBJDIR)
	$(CXX) $(CFLAGS) $(INC) -c $< -o $@

clean :
	rm -rf $(OBJS)
	rm -rf $(OBJDIR)

fclean : clean
	rm -rf $(NAME)

re : fclean all

.PHONY : all clean fclean re