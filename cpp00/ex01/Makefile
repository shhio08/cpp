CXX = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98
INC = -I inc/
SRCS = src/main.cpp src/PhoneBook.cpp src/Contact.cpp
OBJS = $(SRCS:.cpp=.o)

NAME = phonebook

all : $(NAME)

$(NAME) : $(OBJS)
	$(CXX) $(CFLAGS) $(INC) $(OBJS) -o $(NAME)

clean :
	rm -rf $(OBJS)

fclean : clean
	rm -rf $(NAME)

re : fclean all

.PHONY : all clean fclean re