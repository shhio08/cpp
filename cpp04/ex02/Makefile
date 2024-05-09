CXX = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98
INC = -I inc/
SECSDIR = src/
OBJDIR = obj/
SRCS = Animal.cpp Cat.cpp Dog.cpp main.cpp WrongAnimal.cpp WrongCat.cpp Brain.cpp
OBJS_NAME = $(SRCS:.cpp=.o)
OBJS = $(addprefix $(OBJDIR), $(OBJS_NAME))

NAME = animal

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