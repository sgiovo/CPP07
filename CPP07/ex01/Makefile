NAME	=	IterT

SRCS	=	main.cpp

OBJS	=	$(SRCS:.cpp=.o)

CLANG	=	clang++

FLAGS	=	-Wall -Wextra -Werror

%.o		:	%.cpp
			@$(CLANG) $(FLAGS) -c $^ -o $@

all		:	$(NAME)

$(NAME)	:
			@$(CLANG) $(FLAGS) $(SRCS) -o $(NAME)
			@echo 👍

clean	:
			@rm -rf $(OBJS)
			@echo 💨

fclean	:	clean
			@rm -rf $(NAME)

re		:	fclean all

test		:
			./$(NAME)

leaks	:
			leaks --atExit -- ./$(NAME)

.PHONY	:	all clean fclean re run