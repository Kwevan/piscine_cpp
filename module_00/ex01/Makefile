NAME	=	phonebook

SRCS 	=	phonebook.cpp\
			contact.cpp

CC		=	clang++

OBJS	= 	$(SRCS:.cpp=.o)

FLAGS	=	-Wall -Wextra -Werror


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
