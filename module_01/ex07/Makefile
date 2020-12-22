NAME	=	replace

SRCS 	=	main.cpp\

CC		=	clang++

OBJS	= 	$(SRCS:.cpp=.o)

FLAGS	=	-Wall -Wextra -Werror

FLAGS2	=	-Wall -Wextra -Werror -std=c++98


all:		$(NAME)

$(NAME):	$(OBJS)
			$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

.c.o:
			$(CC) $(FLAGS) $@ -c $<

clean:
			rm -rf $(OBJS)

fclean:		clean
			rm -rf $(NAME)

re:			fclean all

.PHONY:		all  clean fclean re
