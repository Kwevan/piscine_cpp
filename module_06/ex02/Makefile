NAME	=	identify

SRCS 	=	main.cpp\
				Base.cpp\

CC		=	clang++

OBJS	= 	$(SRCS:.cpp=.o)

FLAGS	=	-Wall -Wextra -Werror

#FLAGS	=	-Wall -Wextra -Werror -std=c++98


all:		$(NAME)

$(NAME):	$(OBJS)
			$(CC) $(FLAGS) $(OBJS) -o $(NAME)

%.o: %.cpp
			$(CC) $(FLAGS) -o $@ -c $<

clean:
			rm -rf $(OBJS)

fclean:		clean
			rm -rf $(NAME)

re:			fclean all

.PHONY:		all  clean fclean re
