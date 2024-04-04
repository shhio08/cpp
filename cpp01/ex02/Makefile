CXX = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98
SRC = main.cpp
OBJ = $(SRC:.cpp=.o)

NAME = brain

all : $(NAME)

$(NAME) : $(OBJ)
	$(CXX) $(CFLAGS) -o $@ $^

%.o : %.cpp
	$(CXX) $(CFLAGS) -c $< -o $@

clean :
	rm -rf $(OBJ)

fclean : clean
	rm -rf $(NAME)

re : fclean all

.PHONY : all clean fclean re