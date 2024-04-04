CXX = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98
INC = -I inc/
SECSDIR = src/
OBJDIR = obj/
SRCS = main.cpp
OBJS_NAME = $(SRCS:.cpp=.o)
OBJS = $(addprefix $(OBJDIR), $(OBJS_NAME))

NAME = ex04

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