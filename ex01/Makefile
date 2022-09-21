NAME	= phonebook

SRCS	= Contact.cpp main.cpp


OBJS	= ${SRCS:%.cpp=%.o}

CC	= c++

FLAGS	= -Wall -Wextra -Werror -std=c++98

all	:	$(NAME)


$(NAME)	:	$(OBJS)
		$(CC) $(FLAGS) $(OBJS) -o ${NAME}


clean	:
		rm -rf $(OBJS)

fclean	:	clean
		rm -rf $(NAME)

re	:	fclean
		make all

.PHONY	:	all clean fclean re
