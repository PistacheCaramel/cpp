NAME	= a.out

SRCS	= main.cpp


OBJS	= ${SRCS:%.cpp=%.o}

CC	= c++

FLAGS	= -Wall -Wextra -Werror -std=c++98

$(NAME)	:	$(OBJS)
		$(CC) $(FLAGS) $(OBJS) -o $(NAME)

all	:	$(NAME)

clean	:
		rm -rf $(OBJS)

fclean	:	clean
		rm -rf $(NAME)

re	:	fclean
		make all

.PHONY	:	all clean fclean re
