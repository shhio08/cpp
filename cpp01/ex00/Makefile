# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: stakimot <stakimot@student.42tokyo.jp>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/06/20 20:01:57 by stakimot          #+#    #+#              #
#    Updated: 2024/03/09 18:57:12 by stakimot         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CXX = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98
INC = -I inc/
SRCDIR = src/
OBJDIR = obj/
SRCS = main.cpp Zombie.cpp newZombie.cpp
OBJS_NAME = $(SRCS:.cpp=.o)
OBJS = $(addprefix $(OBJDIR), $(OBJS_NAME))

NAME = zombie

all : $(NAME)

$(NAME) : $(OBJS)
	$(CXX) $(CFLAGS) -o $@ $^

$(OBJDIR)%.o :$(SRCDIR)%.cpp
	@mkdir -p $(OBJDIR)
	$(CXX) $(CFLAGS) $(INC) -c $< -o $@

clean :
	rm -rf $(OBJS)
	rm -rf $(OBJDIR)

fclean : clean
	rm -rf $(NAME)

re : fclean all

.PHONY : all clean fclean re